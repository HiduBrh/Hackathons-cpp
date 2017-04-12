#include "Application.h"


Application::Application() {

}

Application::~Application() {

}

Hackathon &Application::operator[](const int &i) {
    return this->hackatons[i];
}

const Hackathon Application::operator[](const int &i) const {
    return this->hackatons[i];
}

Hackathon &Application::creer_hackaton() {
    Hackathon hackaton;
    this->hackatons.push_back(hackaton);
    return hackaton;
}
