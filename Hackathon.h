#ifndef HACKATHONS_HACKATHON_H
#define HACKATHONS_HACKATHON_H

#include "Equipe.h"
#include "Etape.h"
#include <vector>
#include <map>
#include <algorithm>

class Hackathon {

private:
    unsigned int ordre_gen;
    vector<Equipe> equipes;
    vector<Etape> etapes;

    static bool compare(double i, double j);

public:
    Hackathon();

    void setEtapes(const vector<Etape> &etapes);

    const vector<Equipe> &getEquipes();

    void setEquipes(const vector<Equipe> &equipes);

    const vector<Etape> &getEtapes();

    void ajouter_equipe(const string &nom, unsigned int membres_number);

    Equipe &recuperer_equipe(const string &nom);

    void ajouter_etape(const double duree, unsigned int num);

    Etape &recuperer_etape(const unsigned int num);

    void afficher_classement();

    void ajouter_une_note(double note, const string &nom_equipe);

    void terminer_etape();
};


#endif //HACKATHONS_HACKATHON_H
