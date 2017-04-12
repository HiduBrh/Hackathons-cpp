//
// Created by idu on 11/04/2017.
//

#ifndef HACKATHONS_ETAPE_H
#define HACKATHONS_ETAPE_H

#include "Note.h"
#include <vector>
class Etape {

private:

    static unsigned int ordre_gen;
    unsigned int ordre;
    double duree;
    vector<Note> notes;

public:

    Etape(double duree);

    double getDuree() const;

    void setDuree(double duree);

    const vector<Note> &getNotes() const;

    void setNotes(const vector<Note> &notes);

    static unsigned int getOrdre_gen();

    unsigned int getOrdre() const;

    void ajouter_une_note(Note note);


};


#endif //HACKATHONS_ETAPE_H
