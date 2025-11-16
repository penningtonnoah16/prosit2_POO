#pragma once 
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

namespace gestiontexte {
    class GestionTexte {
        public :
            GestionTexte();
            GestionTexte(bool, string, string);
            ~GestionTexte();
            void Mode();
            string get_Texte();
        private :
            bool ecrire_lire;
            string adresse;
            string texte;
    }
}