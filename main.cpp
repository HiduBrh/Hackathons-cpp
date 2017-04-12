#include <iostream>
#include "Utilisateur.h"
#include "Application.h"
#include "Hackathon.h"

int main() {
    Utilisateur utilisateur;
    Application application;
    Hackathon hackathon;

    utilisateur.set_application(application);


    utilisateur.get_application()[0];
    bool finirProgram= false;
    int selection = 0;

    do{
        std::cout <<"1 Créer Hackaton"<< std::endl;
        std::cout <<"2 Selectionner Hackaton" << std::endl;
        std::cout <<"3 Ajoutez une équipe!"<< std::endl;
        std::cout <<"4 Ajoutez une étape!"<< std::endl;
        std::cout <<"5 Ajoutez une note!"<< std::endl;
        std::cout <<"6 Terminer étape!"<< std::endl;
        std::cout << "-----------7 ->Sortir-------------" << std::endl;
        cin >> selection;

        switch (selection) {
            case 1:
                utilisateur.get_application().creer_hackaton();
                std::cout <<"Hackaton créé!"<< std::endl;
                break;
            case 2:
                int i;
                std::cout <<"saisir le numéro du hackaton"<< std::endl;
                cin >> i;
                hackathon = utilisateur.get_application()[i];
                break;
            case 3:
                string name;
                int number_member;
                std::cout <<"saisir le nom de l'équipe"<< std::endl;
                cin >> name;
                std::cout<<"et le nombre de membre"<< std::endl;
                cin >> number_member;
                hackathon.ajouter_equipe(name,number_member);
                break;
            case 4:
                double duree;
                int num;
                std::cout <<"saisir la durée de l'étape"<< std::endl;
                cin >> duree;
                std::cout<<"et le numéro de l'épreuve"<< std::endl;
                cin >> num;
                hackathon.ajouter_etape(duree,num);
                break;
            case 5:
                double note;
                std::cout <<"saisir la note de l'équipe"<< std::endl;
                cin >> note;
                std::cout<<"et le numéro de l'épreuve"<< std::endl;
                cin >> name;
                hackathon.ajouter_une_note(note, name);
                break;


            case 6:
                hackathon.terminer_etape();
                break;
            case 7:
                exit(0);

            default:
                cout<< "Mauvaise entrée.\n";
        }




    }
    while (selection != 5);
return (0);

}