#include <iostream>
#include "Utilisateur.h"
#include "Application.h"

int main() {
    Utilisateur utilisateur;
    Application application;

    utilisateur.set_application(application);


    utilisateur.get_application()[0];

    int selection = 0;

    do{
        std::cout << "---------1 ->Créer Hackaton-------"<< std::endl;
        std::cout << "--------2 ->Selectionner Hackaton--" << std::endl;
        std::cout << "-------3 ->Ajouter équipe---------" << std::endl;
        std::cout << "---------4 ->Ajouter note---------" << std::endl;
        std::cout << "-----------5 ->Sortir-------------" << std::endl;
        cin >> selection;

        switch (selection) {
            case 1:
                utilisateur.get_application().creer_hackaton();
                break;
            case 2:
                utilisateur.get_application().get
                break;
            case 3:
                ...
                break;
            case 4:
                ...
                break;
                ...
            case 5:
                cout << "Goodbye.\n";
                break;

            default:
                cout<< "Mauvaise entrée.\n";
        }



        return 0;
    }
    while (selection != 5);


}