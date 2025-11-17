#include "GestionTexte.h"

using namespace std;

GestionTexte::GestionTexte(){
    bool ecrire_lire = 0;
    string adresse = "";
    string texte = "";
};

GestionTexte::GestionTexte(bool ecrire_lire, string adresse, string texte;){
    bool ecrire_lire = ecrire_lire;
    string adresse = adresse;
    string texte = texte;
};

GestionTexte::~GestionTexte(){};

void GestionTexte::Mode(){
    if (ecrire_lire == 0){
        Ecrire::Ecrire a = Ecrire(string texte, string adresse);
        a.Modification();
        a.~Ecrire();
    };
    else {
        Lire::Lire b = Lire(string texte, string adresse);
        b.Affichage();
        b.~Lire();
    };
};

string get_Texte(){
    return texte;
}