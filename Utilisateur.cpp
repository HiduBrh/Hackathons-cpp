#include "Utilisateur.h"


Utilisateur::Utilisateur() {
    application = Application();
}

Utilisateur::~Utilisateur() {

}

const Application & Utilisateur::get_application() {
    return this->application;
}