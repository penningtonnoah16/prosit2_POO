#include "app.h"

using namespace std;

void Application::demanderAction(string chm, int choix){
    this->chm = chm;
    this->choix = choix;
    string chm;
    int choix;
    cout << "Veuillez entrer l'emplacement du fichier souhaite : " << endl;
    cin >> chm;
    cout << "Veuillez entrer un mode de chiffrement : "
    cin >> choix;
}

Application::Application(){

};

Application::~Application(){

}