//
// Created by idu on 11/04/2017.
//

#ifndef HACKATHONS_NOTE_H
#define HACKATHONS_NOTE_H

#include <ostream>
#include "Equipe.h"

class Note {

private:

    unsigned int note;
    static const float coeff;
    Equipe equipe;

public:

    Note(unsigned int note, const Equipe &equipe);

    unsigned int getNote() const;

    void setNote(unsigned int note);

    static const long getCoeff();

    const Equipe &getEquipe() const;

    void setEquipe(const Equipe &equipe);

    virtual ~Note();

    friend ostream &operator<<(ostream &os, const Note &note);
};


#endif //HACKATHONS_NOTE_H
