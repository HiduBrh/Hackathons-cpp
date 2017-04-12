#include "Equipe.h"

const string &Equipe::getNom() const {
    return nom;
}

void Equipe::setNom(const string &nom) {
    Equipe::nom = nom;
}

unsigned int Equipe::getMembres_number() const {
    return membres_number;
}

void Equipe::setMembres_number(unsigned int membres_number) {
    Equipe::membres_number = membres_number;
}

Equipe::Equipe(const string &nom, unsigned int membres_number) : nom(nom), membres_number(membres_number),
                                                                 id(++Equipe::id_gen) {
}

Equipe::~Equipe() {

}

ostream &operator<<(ostream &os, const Equipe &equipe) {
    os << "nom: " << equipe.nom << " membres_number: " << equipe.membres_number;
    return os;
}

unsigned int Equipe::getId_gen() {
    return id_gen;
}

unsigned int Equipe::getId() const {
    return id;
}
