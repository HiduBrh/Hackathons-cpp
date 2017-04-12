//
// Created by idu on 11/04/2017.
//

#include "Note.h"

Note::Note(unsigned int note, const Equipe &equipe) : equipe(equipe) {
    if(equipe.getMembres_number()==5)
        this->note=note;
    else if(equipe.getMembres_number()<5)
            this->note=note+Note::coeff*note;
        else
            this->note=note-Note::coeff*note;

}

unsigned int Note::getNote() const {
    return note;
}

void Note::setNote(unsigned int note) {
    if(equipe.getMembres_number()==5)
        this->note=note;
    else if(equipe.getMembres_number()<5)
        this->note=note+Note::coeff*note;
    else
        this->note=note-Note::coeff*note;

}

const long Note::getCoeff() {
    return coeff;
}

const Equipe &Note::getEquipe() const {
    return equipe;
}

void Note::setEquipe(const Equipe &equipe) {
    Note::equipe = equipe;
}

Note::~Note() {

}

ostream &operator<<(ostream &os, const Note &note) {
    os << "note: " << note.note << " equipe: " << note.equipe;
    return os;
}
