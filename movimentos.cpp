#include "movimentos.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

Movimentos::Movimentos(std::string arq):nomearq(arq){};
Movimentos::~Movimentos(){};

void Movimentos::getInfoPartida() {
    arquivo.open(nomearq);
    while(arquivo.eof()==false){
        std::getline(arquivo, linha);
        // salva no vetor linhas cada linha
        linhas.push_back(linha);
    };
    //pega o tamanho do vetor linhas
    tamanho = linhas.size();

    /*agora ele vai salvar no vetor jogadas as linhas do vetor linha 
    (isso é pq o arquivo pgn tem um padrao de 10 linhas com os dados das jogadas
    e a partir da 11 vem as jogadas de cada jogador)
    */
    for (int i=11 ; i<tamanho; i++){
        jogadas.push_back(linhas[i]);
    }
    for (int x =0; x<11; x++){
        std::cout << linhas[x] << std::endl;
    }
    arquivo.close();
};

std::vector<std::string> Movimentos::getJogadas(){
    tamanho = jogadas.size(); //pega o tamanho do vetor de jogadas

    for (int i = 0; i<tamanho; i++){
        linha_jogadas = jogadas[i]; //pega o elemento do vetor jogadas e transforma apenas numa string
        tamanho2 = linha_jogadas.size(); //pega o tamanho dessa string
        tamanho_ultimo = linha_jogadas.find_last_of(" "); //pega a posicao do ultimo elemento
        ultimo = linha_jogadas.substr(tamanho_ultimo+1); // pega qual e o ultimo elemento
        for (int i=0; i<tamanho2; i++){
            vazio = linha_jogadas.find(" ");
            str3 = linha_jogadas.substr(0,vazio); //pega o elemento antes do primeiro " " da string
            jogada_por_jogada.push_back(str3); //joga esse elemento no vetor de jogadas
            linha_jogadas.erase(0,vazio+1); //apaga esse primeiro elemento

            // verifica se o elemento da vez é o ultimo da string, se for, para o loop
            if (str3.compare(ultimo)==0){
                i=tamanho2;
            }
        }

    }
    return jogada_por_jogada;
};
