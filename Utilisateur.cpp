#include "Utilisateur.h"


Utilisateur::Utilisateur() {
    application = Application();
}

Utilisateur::~Utilisateur() {
    delete this->application;
}

const Application & Utilisateur::get_application() {
    return this->application;
}