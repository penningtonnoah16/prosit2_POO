#pragma once
#include <string>

namespace IHM{

    class IHM{
        public:
            IHM();
            ~IHM();

            int choixCrypto();
            std::string choixChemin();
    };
}