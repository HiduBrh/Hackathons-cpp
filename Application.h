#ifndef HACKATHONS_APPLICATION_H
#define HACKATHONS_APPLICATION_H


#include "Hackathon.h"

class Application {
public:
    Application();

    ~Application();

    Hackathon &operator[](const int &i);

    const Hackathon operator[](const int &i) const;

    Hackathon & creer_hackaton();

private:
    std::vector<Hackathon> hackatons;
};


#endif //HACKATHONS_APPLICATION_H
