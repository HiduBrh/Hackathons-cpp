#include "Note.h"

Note::Note(double note, const Equipe &equipe) : equipe(equipe) {
    this->setNote(note);
}

double Note::getNote() const {
    return note;
}

void Note::setNote(unsigned int note) {
    this->note = note * this->equipe.get_coeff();
    Equipe e=this->getEquipe();
    e.updateNoteEquipe(note);
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
