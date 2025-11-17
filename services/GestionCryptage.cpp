#include "GestionCryptage.h"
#include "CryptageCesar.h"
#include "CryptageXOR.h"
#include <string>

namespace GestionCryptage{

    GestionCryptage::GestionCryptage(){}
    GestionCryptage::~GestionCryptage(){}

    void GestionCryptage::selectionnerAlgo(int rep){
        this->Crypt_mode=rep;
    }

    std::string GestionCryptage::encrypter(std::string txt){
        if (algoChoisi == 1) {
            CryptageCesar cesar(3);
            return cesar.encrypter(texte);
        }
        if (algoChoisi == 2) {
            CryptageXOR xorAlgo(42);
            return xorAlgo.encrypter(texte);
        }
        if (algoChoisi == 3) {
            CryptageCesar cesar(3);
            CryptageXOR xorAlgo(42);
            std::string temp = cesar.encrypter(texte);
            return xorAlgo.encrypter(temp);
        }
    return "ERREUR : aucun algo choisi";
}

std::string GestionCryptage::decrypter(std::string texte) {
    if (algoChoisi == 1) {
        CryptageCesar cesar(3);
        return cesar.decrypter(texte);
    }
    if (algoChoisi == 2) {
        CryptageXOR xorAlgo(42);
        return xorAlgo.decrypter(texte);
    }
    if (algoChoisi == 3) {
        CryptageCesar cesar(3);
        CryptageXOR xorAlgo(42);

        std::string temp = xorAlgo.decrypter(texte);
        return cesar.decrypter(temp);
    }
    return "ERREUR : aucun algo choisi";
}
}