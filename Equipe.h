#ifndef HACKATHONS_EQUIPE_H
#define HACKATHONS_EQUIPE_H

#include <iostream>

using namespace std;

class Equipe {

private:

    const static double COEFF_DEFAUT;
    const static double VARIATION_COEFF;
    const static int NOMBRE_MEMBRE_DEFAUT;

    static unsigned int id_gen;
    unsigned int id;
    string nom;
    unsigned int nombreMembres;
    double noteGlobalHack;

public:

    Equipe(const string &nom, unsigned int membres_number);

    virtual ~Equipe();

    const string &getNom() const;

    void setNom(const string &nom);

    unsigned int getMembres_number() const;

    void setMembres_number(unsigned int membres_number);

    static unsigned int getId_gen();

    unsigned int getId() const;

    double get_coeff() const;

    friend ostream &operator<<(ostream &os, const Equipe &equipe);

    double getNoteGlobalHack() const;

    void setNoteGlobalHack(double noteGlobalHack);

    void updateNoteEquipe(double note);

};


#endif //HACKATHONS_EQUIPE_H
