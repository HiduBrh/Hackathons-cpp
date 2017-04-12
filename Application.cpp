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

std::ostream &operator<<(std::ostream &os, const Application &application) {
    int i = 0;
    for (vector<Hackathon>::const_iterator it = application.hackatons.begin(); it < application.hackatons.end(); ++it, ++i) {
        os << i << "." << endl;
    }
    return os;
}
