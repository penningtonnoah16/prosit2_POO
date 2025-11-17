#include "ihm.h"
#include <iostream>
#include <string>

namespace IHM{

    IHM::IHM(){};
    IHM::~IHM(){};

    int IHM::choixCrypto(){
        int i;
        std::cout<<"Quelle méthode de cryptage utiliser ?"<<std::endl;
        std::cin>>i;
        return i;
    }

    std::string IHM::choixChemin(){
        std::string i;
        std::cout<<"Quel chemin de fichier utiliser ?"<<std::endl;
        std::cin>>i;
        return i;
    }
}

