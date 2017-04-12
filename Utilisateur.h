#ifndef HACKATHONS_UTILISATEUR_H
#define HACKATHONS_UTILISATEUR_H


#include "Application.h"

class Utilisateur {
public:
    Utilisateur();

    ~Utilisateur();

    const Application & get_application();

private:
    Application application;

};


#endif //HACKATHONS_UTILISATEUR_H
