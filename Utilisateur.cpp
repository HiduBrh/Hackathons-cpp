#include "Utilisateur.h"


Utilisateur::Utilisateur() {

}

Utilisateur::~Utilisateur() {

}


Application &Utilisateur::get_application() {
    return this->application;
}

const void Utilisateur::set_application(const Application &application) {
    this->application = application;
}
