#include "Hackathon.h"


Hackathon::Hackathon() {
    this->ordre_gen = 0;
    this->etape_courrante = 0;
}

const vector<Equipe> &Hackathon::getEquipes() {
    return equipes;
}

void Hackathon::setEquipes(const vector<Equipe> &equipes) {
    this->equipes = equipes;
}

const vector<Etape> &Hackathon::getEtapes() {
    return etapes;
}

void Hackathon::setEtapes(const vector<Etape> &etapes) {
    this->etapes = etapes;
}

void Hackathon::afficher_classement() {
    //std::map<std::string, double> notesProvisoires;

    std::sort(equipes.begin(), equipes.end(), compare);
    cout << "Classement provisoire:" << endl;
    for (auto const &equipe : equipes) {
        cout << equipe.getNom() << " :\t" << equipe.getNoteGlobalHack() << endl;
    }
}

bool Hackathon::compare(Equipe i, Equipe j) {
    return (i.getNoteGlobalHack() > j.getNoteGlobalHack());
}

void Hackathon::ajouter_equipe(const string &nom, unsigned int membres_number) {
    equipes.push_back(Equipe(nom, membres_number));
}

Equipe &Hackathon::recuperer_equipe(const unsigned int &id) {
    for (Equipe &equipe : equipes) {
        if (equipe.getId() == id)
            return equipe;
    }
}

void Hackathon::ajouter_etape(const double duree) {
    etapes.push_back(Etape(duree, this->ordre_gen++));
}

Etape &Hackathon::recuperer_etape(const unsigned int num) {
    for (auto const &etape : etapes) {
        if (etape.getOrdre() == num)
            return const_cast<Etape &>(etape);
    }
}

void Hackathon::ajouter_une_note(const unsigned int &idEquipe, const double &note) {
    Equipe equipe = recuperer_equipe(idEquipe);
    this->etapes[this->etape_courrante].ajouter_une_note(Note(note, equipe));
}

void Hackathon::terminer_etape() {
    if (etape_courrante >= this->etapes.size()) throw std::out_of_range("Le hackathon n'a plus d'etapes.");
    this->etapes[this->etape_courrante++].terminer_etape();
    afficher_classement();
}

