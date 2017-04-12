#include "Application.h"


Application::Application() {

}

Application::~Application() {

}

Hackathon &Application::operator[](const int &i) {
    return this->hackatons[i];
}

Hackathon Application::operator[](const int &i) const {
    return this->hackatons[i];
}

int Application::creer_hackaton() {
    this->hackatons.push_back(Hackathon());
    return (int) this->hackatons.size() - 1;
}
