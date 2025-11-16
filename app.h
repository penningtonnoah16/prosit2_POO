#pragma once 
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

namespace app {

    class App {
        public :
            void Executer();
            App();
            App(int, bool, string, bool, string, string, int)
            ~App();
    }   private :
            int crypt_mode;
            bool crypt_decrypt;
            string adresse;
            bool ecrire_lire;
            string texte;
            string clef;
            int decalage

}