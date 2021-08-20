#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "pecas.h"

int main() {
    std::ifstream arq;
    std::string linha;
    std::vector<std::string> linhas;
    arq.open("jogo01.pgn");
    
    while(arq.eof()==false){
        std::getline(arq, linha);
        linhas.push_back(linha);
    };

    std::vector<std::string> jogadas;

    auto it = jogadas.begin();
    jogadas.insert(it, linhas[11]);

    std::cout << jogadas[0] << std::endl;

    linha = jogadas[0];

    std::vector<std::string> jogada_por_jogada;

    int tamanho = linha.size();
    std::cout << tamanho << std::endl;
    std::size_t vazio;
    std::string str3;
    std::size_t tamanho_ultimo = linha.find_last_of(" ");
    std::string ultimo = linha.substr(tamanho_ultimo+1);
    for (int i=0; i<tamanho; i++){
        vazio = linha.find(" ");
        str3 = linha.substr(0,vazio);
        std::cout << str3 << " ";
        jogada_por_jogada.push_back(str3);
        linha.erase(0,vazio+1);
        if (str3.compare(ultimo)==0){
            i=tamanho;
            std::cout << std::endl;
        }
        
        

    }
    /*
    std::size_t vazio = jogadas[0].find(" ");
    std::string str3 = jogadas[0].substr(0,vazio);
    std::cout << str3 << " ";
    linha.erase(0,vazio+1);

    vazio = linha.find(" ");
    str3 = linha.substr(0,vazio);
    std::cout << str3 << " ";
    linha.erase(0,vazio+1);
    */
    


    for (int x =0; x<11; x++){
        std::cout << linhas[x] << std::endl;
    }
    arq.close();
    Pecas tabuleiro;
    tabuleiro.imprime_tabuleiro();


    unsigned char vertical = 124;
    unsigned char horizontal = 196;
    unsigned char CantoSuperiorDireito = 35;
    unsigned char IntercecaoEmbaixo = 193;
    unsigned char IntercecaoEmcima = 194;
    unsigned char IntercecaoEsquerda = 195;
    //std::cout << CantoSuperiorDireito << std::endl;
    

    /*
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
    */
    
    return 0;
}