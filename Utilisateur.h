#ifndef HACKATHONS_UTILISATEUR_H
#define HACKATHONS_UTILISATEUR_H


#include "Application.h"

class Utilisateur {
public:
    Utilisateur();

    ~Utilisateur();

    Application & get_application();

    const set_application(const Application& application);

private:
    Application application;

};


#endif //HACKATHONS_UTILISATEUR_H
