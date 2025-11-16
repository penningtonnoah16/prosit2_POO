#include "app.h"

using namespace std;


App::App(){
    int crypt_mode = 1;
    bool crypt_decrypt = 1;
    string adresse = "";
    bool ecrire_lire = 0;
    string texte = "";
    string clef = "";
    int decalage = 1;
};

App:App(int crypt_mode, bool crypt_decrypt, string adresse, bool ecrire_lire, string texte, string clef, int decalage){
    int crypt_mode = crypt_mode;
    bool crypt_decrypt = crypt_decrypt;
    string adresse = adresse;
    bool ecrire_lire = ecrire_lire;
    string texte = texte;
    string clef = clef;
    int decalage = decalage;
}

App::~App(){};

void App::Executer(){
    GestionTexte::GestionTexte a = GestionTexte(bool ecrire_lire, string adresse, string texte);
    a.Mode();
    texte = a.get_Texte();
    a.~GestionTexte();
    bool ecrire_lire = 1;
    GestionCryptage::GestionCryptage b = GestionCryptage(bool crypt_decrypt, int crypt_mode, string texte, string clef, int decalage);
    b.Mode();
    texte = b.get_Texte();
    b.~GestionCryptage();
    GestionTexte::GestionTexte c = GestionTexte(bool ecrire_lire, string adresse, string texte);
    c.Mode();
    c.~GestionTexte();
}

