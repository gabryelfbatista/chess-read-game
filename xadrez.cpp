#include <iostream>
#include <string>
#include <vector>

int main() {
    unsigned char vertical = 124;
    unsigned char horizontal = 196;
    unsigned char CantoSuperiorDireito = 35;
    unsigned char IntercecaoEmbaixo = 193;
    unsigned char IntercecaoEmcima = 194;
    unsigned char IntercecaoEsquerda = 195;
    //std::cout << CantoSuperiorDireito << std::endl;
    
    std::vector<char> tabuleiro[45][48];


    for (int i=0; i<45 ; i++){
        if ((i>=1 && i<4) || (i>=5 && i<8) || (i>=9 && i<13)){
            for (int x=0; x<8; x++){
                std::cout << CantoSuperiorDireito<< "     ";
                if (x==7){
                    std::cout << CantoSuperiorDireito << std::endl;
                }
            }
        }else {
            for (int j=0; j<48; j++){
                std::cout << CantoSuperiorDireito;
                if (j==47){
                std::cout << CantoSuperiorDireito<< std::endl;
                }
            }   
        }                      
    }

    return 0;
}