#ifndef HACKATHONS_NOTE_H
#define HACKATHONS_NOTE_H

#include <ostream>
#include "Equipe.h"

class Note {

private:
    double note;
    Equipe equipe;

public:

    Note(double note, const Equipe &equipe);

    double getNote() const;

    void setNote(unsigned int note);

    const Equipe &getEquipe() const;

    void setEquipe(const Equipe &equipe);

    virtual ~Note();

    friend ostream &operator<<(ostream &os, const Note &note);
};


#endif //HACKATHONS_NOTE_H
