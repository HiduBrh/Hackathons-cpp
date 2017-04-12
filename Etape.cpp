//
// Created by idu on 11/04/2017.
//

#include "Etape.h"

Etape::Etape(double duree, unsigned int num) : duree(duree),ordre(num),termine(false) {}


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


unsigned int Etape::getOrdre() const {
    return ordre;
}

void Etape::ajouter_une_note(Note note){
    notes.push_back(note);
}

ostream &operator<<(ostream &os, const Etape &etape) {
    os << "ordre: " << etape.ordre << " duree: " << etape.duree;
    return os;
}
void Etape::terminer_etape(){
    this->termine=true;
}

Etape::~Etape() {
    notes.clear();
}




