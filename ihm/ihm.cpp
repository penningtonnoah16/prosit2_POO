#include<ihm/ihm.h>
#include <iostream>

namespace app
{
    namespace ihm{

            Ihm::Ihm(){};
            void Ihm::menu() const{
                    std::cout<< "Bienvenue dans l'application CodagePlus vous allez pouvoir coder une chaine de charactère" <<std::endl; 
            };
            int Ihm::choixNiveau() const {
                std::cout << "Veuillez choisir votre niveau de sécurité : " << std::endl;
                std::cout<< " 1 : pour un codage Cesar" <<std::endl;
                std::cout<< " 2 : codage Xor" << std::endl;
                std::cout << "3 : codage César ET codage Xor"<< std::endl;

                int niveauAlgo{0};
                bool test{true};
                while(test){
                    std::cin >> niveauAlgo;
                    if(niveauAlgo ==1 || niveauAlgo ==2 || niveauAlgo==3){
                        return niveauAlgo;
                    }
                    std::cout << "Niveau de codage incorrecte, veuillez choisir : 1, 2 ou 3" << std::endl;
                }

            };
            int Ihm::choixCle() const{
                std::cout << "Veuillez choisir votre décallage (un entier): " << std::endl;
                int decallage{0};
                std::cin >> decallage;
                return decallage;

            };
            std::string Ihm::choixXor() const{
                std::cout << "Veuillez choisir votre phrase de codage : " << std::endl;
                std::string phrase {""};
                std::cin >> phrase;
                return phrase;
            };
    }
    
} 
