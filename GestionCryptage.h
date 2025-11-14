#pragma once
#include<string>


namespace GestionCryptage{

    class GestionCryptage{

        private :
            int algoChoisi;

        public :
            GestionCryptage();
            ~GestionCryptage();
            bool selectionnerAlgo(int);
            std::string encrypter(std::string);
            std::string decrypter(std::string);
    };
}