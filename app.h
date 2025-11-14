#pragma once 
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

namespace app {

    class Application {
        public :
            void demanderAction(string, int);
            void executer();
            Application();
            ~Application();
    }   private :
            string texte;
            string chm;
            int choix;

}