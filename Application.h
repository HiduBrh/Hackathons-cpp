#ifndef HACKATHONS_APPLICATION_H
#define HACKATHONS_APPLICATION_H


#include "Hackathon.h"

class Application {
public:
    Application();

    ~Application();

    Hackathon &operator[](const int &i);

    Hackathon operator[](const int &i) const;

    int creer_hackaton();

    friend ostream &operator<<(ostream &os, const Application& application);

private:
    std::vector<Hackathon> hackatons;
};


#endif //HACKATHONS_APPLICATION_H
