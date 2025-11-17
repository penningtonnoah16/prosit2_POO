#pragma once
#include<string>


namespace GestionCryptage{

    class GestionCryptage{

        private :
            int Crypt_mode;
            std::string Texte;
            bool Crypt_Decrypt;

        public :
            GestionCryptage();
            ~GestionCryptage();
            void selectionnerAlgo();
            std::string encrypter(std::string);
            std::string decrypter(std::string);
    };
}