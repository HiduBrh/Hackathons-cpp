//
// Created by idu on 12/04/2017.
//

#ifndef HACKATHONS_HACKATHON_H
#define HACKATHONS_HACKATHON_H

#include "Equipe.h"
#include "Etape.h"
#include <vector>

class Hackathon {

private:
    unsigned int ordre_gen;
    vector<Equipe> equipes;
    vector<Etape> etapes;

public:
    Hackathon();

    void setEtapes(const vector<Etape> &etapes);
    const vector<Equipe> &Hackathon::getEquipes();
    void setEquipes(const vector<Equipe> &equipes);
    const vector<Etape> &getEtapes();
    void ajouter equipe(const string &nom, unsigned int membres_number);
    Equipe& recuperer_equipe(const string &nom);
    void ajouter etape(const string &nom, unsigned int membres_number);
    Equipe& recuperer_etape(const string &nom);

};


#endif //HACKATHONS_HACKATHON_H
