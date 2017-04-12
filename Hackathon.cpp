#include "Hackathon.h"


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

Hackathon::Hackathon() {
    ordre_gen = 0;
}

void &Hackathon::afficher_classement() {
    std::map<std::string, double> notesProvisoires;
    vector<Note> notes;
    for (vector<Etape>::iterator i = etapes.begin(); i != etapes.end(); ++i) {
        notes = i.operator*().getNotes();
        for (vector<Note>::iterator j = notes.begin(); j != notes.end(); ++j) {
            if (notesProvisoires.find(j.operator*().getEquipe().getNom()) == notesProvisoires.end()) {
                notesProvisoires[j.operator*().getEquipe().getNom()] = j.operator*().getNote();
            } else {
                notesProvisoires[j.operator*().getEquipe().getNom()] += j.operator*().getNote();
            }
        }
    }
    std::sort(notesProvisoires.begin(), notesProvisoires.end(), compare);
    cout << "Classement provisoire:" << endl;
    for (auto const &note : notesProvisoires) {
        cout << note.first << " :\t" << note.second << endl;
    }

}

bool Hackathon::compare(double i, double j) {
    return (i < j);
}

void Hackathon::ajouter_equipe(const string &nom, unsigned int membres_number) {
    equipes.push_back(Equipe(nom, membres_number));
}

Equipe &Hackathon::recuperer_equipe(const string &nom) {
    for (auto const &equipe : equipes) {
        if (equipe.getNom() == nom)
            return const_cast<Equipe &>(equipe);
    }
}

void Hackathon::ajouter_etape(const double duree, unsigned int num) {
    etapes.push_back(Etape(duree, num));
}

Etape &Hackathon::recuperer_etape(const unsigned int num) {
    for (auto const &etape : etapes) {
        if (etape.getOrdre() == num)
            return const_cast<Etape &>(etape);
    }
}

void Hackathon::ajouter_une_note(double note, const string &nom_equipe) {
    Equipe equipe = recuperer_equipe(nom_equipe);
    etapes.end().operator*().ajouter_une_note(Note(note, equipe));
}

void Hackathon::terminer_etape(){
    etapes.end().operator*().terminer_etape();
    afficher_classement();
}

