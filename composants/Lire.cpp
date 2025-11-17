#include <iostream>
#include <string>

namespace Lire {
            Lire(int adresse) :adresse(adresse) { }
            void Lire::lire() {
                FILE *f = fopen(this->adresse, "r");
                if (f == NULL) {
                    perror("Erreur d'ouverture");
                    return 1;
            }
                int c;
                while ((c = fgetc(f)) != EOF) {
                    this->text += c;
            }
                f.close()
        }
            void Lire::affichage() {
                if (this -> texte = NULL){
                    println ("aucun fichier n'a été lu")
                    return 0
                else 
                    println (this->texte)
            }
        }
            string Lire::get_txt () {
                return this->texte
        }
    }