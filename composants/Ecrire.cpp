#include <iostream>
#include <string>

namespace Ecrire {
    class Ecrire {
        public : 
            void Ecrire() {
                FILE *f = fopen(this->adresse, "w");
                if (f == NULL) {
                    perror("Erreur d'écriture");
                    return 1;
            }

            }
                f.close()
        
            void modification() {
                
            }
        
            string get_txt () {
                return this->texte
        }}


        private : 
            string texte;
            string adresse;
    
}