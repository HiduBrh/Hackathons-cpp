//
// Created by idu on 12/04/2017.
//

#ifndef HACKATHONS_HACKATHON_H
#define HACKATHONS_HACKATHON_H


class Hackathon {

private:

    vector<Equipe> equipes;
    vector<Etape> etapes;

public:

    void setEtapes(const vector<Etape> &etapes);
    const vector<Equipe> &Hackathon::getEquipes();
    void setEquipes(const vector<Equipe> &equipes);
    const vector<Etape> &getEtapes();

};


#endif //HACKATHONS_HACKATHON_H
