#ifndef HACKATHONS_EQUIPE_H
#define HACKATHONS_EQUIPE_H

#include <iostream>

using namespace std;

class Equipe {

private:

    static unsigned int id_gen;
    unsigned int id;
    string nom;
    unsigned int membres_number;

public:

    Equipe(const string &nom, unsigned int membres_number);

    virtual ~Equipe();

    const string &getNom() const;

    void setNom(const string &nom);

    unsigned int getMembres_number() const;

    void setMembres_number(unsigned int membres_number);

    static unsigned int getId_gen();

    unsigned int getId() const;

    friend ostream &operator<<(ostream &os, const Equipe &equipe);
};


#endif //HACKATHONS_EQUIPE_H
