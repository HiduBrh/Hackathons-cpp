//
// Created by idu on 11/04/2017.
//

#include "Etape.h"

Etape::Etape(double duree) : duree(duree),ordre(++Etape::ordre_gen)  {}


double Etape::getDuree() const {
    return duree;
}

void Etape::setDuree(double duree) {
    Etape::duree = duree;
}

const vector<Note> &Etape::getNotes() const {
    return notes;
}

void Etape::setNotes(const vector<Note> &notes) {
    Etape::notes = notes;
}

unsigned int Etape::getOrdre_gen() {
    return ordre_gen;
}

unsigned int Etape::getOrdre() const {
    return ordre;
}

void Etape::ajouter_une_note(Note note){
    notes.push_back(note);
}


