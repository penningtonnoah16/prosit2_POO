#include <string>

namespace cesar {
    class cryptagecesar{
        private :
            string::texte;
            int decalage;
        public :
            cryptagecesar();
            cryptagecesar(int, string);
            void cryptage(texte){
                for (int i = 0; i < texte.length(); i++){
                char x = letter.at(i) + decalage;}
            }
            void decryptage(){
                for (int i = 0; i < texte.length(); i++){
                char x = letter.at(i) + decalage;}
            }
            string::get_texte(){
                std::cout << texte << std::endl;
            }
            ~cryptagecesar();
    }
}