#include "Equipe.h"

const double Equipe::COEFF_DEFAUT = 1.0;
const int Equipe::NOMBRE_MEMBRE_DEFAUT = 5;
const double Equipe::VARIATION_COEFF = 0.05;

Equipe::Equipe(const string &nom, unsigned int membres_number) : nom(nom), nombreMembres(membres_number),
                                                                 id(++Equipe::id_gen) {
}

Equipe::~Equipe() {

}

const string &Equipe::getNom() const {
    return nom;
}

void Equipe::setNom(const string &nom) {
    Equipe::nom = nom;
}

unsigned int Equipe::getMembres_number() const {
    return nombreMembres;
}

void Equipe::setMembres_number(unsigned int membres_number) {
    Equipe::nombreMembres = membres_number;
}

ostream &operator<<(ostream &os, const Equipe &equipe) {
    os << "nom: " << equipe.nom << " nombre de membres : " << equipe.nombreMembres;
    return os;
}

unsigned int Equipe::getId_gen() {
    return id_gen;
}

unsigned int Equipe::getId() const {
    return id;
}

double Equipe::get_coeff() const {
    if (this->nombreMembres == Equipe::NOMBRE_MEMBRE_DEFAUT) {
        return Equipe::COEFF_DEFAUT;
    }

    double nouveauCoeff = Equipe::COEFF_DEFAUT;
    if (this->nombreMembres < Equipe::NOMBRE_MEMBRE_DEFAUT) {
        for (int i = Equipe::NOMBRE_MEMBRE_DEFAUT; i > this->nombreMembres ; --i) {
            nouveauCoeff -= Equipe::VARIATION_COEFF;
        }
    } else if (this->nombreMembres > Equipe::NOMBRE_MEMBRE_DEFAUT) {
        for (int i = Equipe::NOMBRE_MEMBRE_DEFAUT; i < this->nombreMembres; ++i) {
            nouveauCoeff += Equipe::VARIATION_COEFF;
        }
    }
    return nouveauCoeff;
}
