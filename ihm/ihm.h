#pragma once
#include <string>
namespace app{
    namespace ihm{
        class Ihm{
                private :

                public :
                    Ihm();
                    void menu() const;
                    int choixNiveau() const;
                    int choixCle() const;
                    std::string choixXor() const;
        };
        
    }
}