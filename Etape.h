//
// Created by idu on 11/04/2017.
//

#ifndef HACKATHONS_ETAPE_H
#define HACKATHONS_ETAPE_H

#include "Note.h"
#include <vector>
#include <ostream>

class Etape {

private:

    unsigned int ordre;
    double duree;
    vector<Note> notes;
    bool termine;
public:

    Etape(double duree, unsigned int num);

    double getDuree() const;

    void setDuree(double duree);

    const vector<Note> &getNotes() const;

    void setNotes(const vector<Note> &notes);

    unsigned int getOrdre() const;

    void ajouter_une_note(Note note);

    friend ostream &operator<<(ostream &os, const Etape &etape);

    void terminer_etape();


    virtual ~Etape();
};


#endif //HACKATHONS_ETAPE_H
