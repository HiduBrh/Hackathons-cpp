//
// Created by idu on 12/04/2017.
//

#include "Hackathon.h"

const vector<Equipe> &Hackathon::getEquipes(){
    return equipes;
}

void Hackathon::setEquipes(const vector<Equipe> &equipes) {
    this->equipes = equipes;
}

const vector<Etape> &Hackathon::getEtapes(){
    return etapes;
}

void Hackathon::setEtapes(const vector<Etape> &etapes) {
    this->etapes = etapes;
}