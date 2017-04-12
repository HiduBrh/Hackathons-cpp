#include <iostream>
#include "Utilisateur.h"

int main() {
    Utilisateur utilisateur;

    int selection = 0;
    int hackathon = 0;

    while (true) {
        std::cout << "1 Creer Hackaton" << std::endl;
        std::cout << "2 Afficher les Hackaton" << std::endl;
        std::cout << "3 Afficher les equipes" << std::endl;
        std::cout << "4 Selectionner Hackaton" << std::endl;
        std::cout << "5 Ajoutez une equipe" << std::endl;
        std::cout << "6 Ajoutez une etape" << std::endl;
        std::cout << "7 Ajoutez une note" << std::endl;
        std::cout << "8 Terminer etape" << std::endl;
        std::cout << "-----------0 ->Sortir-------------" << std::endl;
        cin >> selection;

        switch (selection) {
            case 1:
                utilisateur.get_application().creer_hackaton();
                std::cout << "Hackaton cree!" << std::endl;
                break;
            case 2:
                std::cout << utilisateur.get_application() << std::endl;
                break;
            case 3:
                std::cout << utilisateur.get_application()[hackathon] << std::endl;
                break;
            case 4:
                int i;
                std::cout << "saisir le numéro du hackaton" << std::endl;
                cin >> i;
                hackathon = i;
                break;
            case 5: {
                unsigned int number_member;
                std::string name;
                std::cout << "saisir le numero de l'equipe" << std::endl;
                cin >> name;
                std::cout << "et le nombre de membre" << std::endl;
                cin >> number_member;
                utilisateur.get_application()[hackathon].ajouter_equipe(name, number_member);
                break;
            }
            case 6: {
                double duree;
                std::cout << "saisir la duree de l'etape" << std::endl;
                cin >> duree;
                utilisateur.get_application()[hackathon].ajouter_etape(duree);
                break;
            }
            case 7: {
                unsigned int id;
                double note;
                std::cout << "saisir le numero de l'equipe" << std::endl;
                cin >> id;
                std::cout << "saisir la note de l'equipe" << std::endl;
                cin >> note;
                utilisateur.get_application()[hackathon].ajouter_une_note(id, note);
                break;
            }
            case 8:
                utilisateur.get_application()[hackathon].terminer_etape();
                break;
            case 0:
                exit(0);

            default:
                cout << "Mauvaise entree.\n";
        }
    }
}