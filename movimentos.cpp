#include "movimentos.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

Movimentos::Movimentos(std::string arq):nomearq(arq){};
Movimentos::~Movimentos(){};



void Movimentos::separaJogadas(){
    std::size_t ponto; //vai pegar o "." para poder salvar cada string da jogada sem o numero da rodada
    std::size_t vazio; // vai pegar o primeiro espaço entre os movimentos
    std::string str3; // vai ser onde sera salvo cada movimento de cada jogador
    std::size_t posicaoUltimo; //pra pegar onde esta o ultimo elemento
    std::string linhaJogadas;
    int tamanho;
    int tamanho2;
    std::string linha;

    arquivo.open(nomearq);
    while(arquivo.eof()==false){
        std::getline(arquivo, linha);
        // salva no vetor linhas cada linha
        linhas.push_back(linha);
    };
    arquivo.close();
    //pega o tamanho do vetor linhas
    tamanho = linhas.size();

    for (int i=0 ; i<11; i++){
        infoPartida.push_back(linhas[i]);
    } 
    
    /*agora ele vai salvar no vetor jogadas as linhas do vetor linha 
    (isso é pq o arquivo pgn tem um padrao de 10 linhas com os dados das jogadas
    e a partir da 11 vem as jogadas de cada jogador)
    */
    for (int i=11 ; i<tamanho; i++){
        jogadas.push_back(linhas[i]);
    } 
    tamanho = jogadas.size(); //pega o tamanho do vetor de jogadas

    for (int i = 0; i<tamanho; i++){
        linhaJogadas = jogadas[i]; //pega o elemento do vetor jogadas e transforma apenas numa string
        tamanho2 = linhaJogadas.size(); //pega o tamanho dessa string
        posicaoUltimo = linhaJogadas.find_last_of(" "); //pega a posicao do ultimo elemento
        ultimo = linhaJogadas.substr(posicaoUltimo+1); // pega qual e o ultimo elemento
        for (int i=0; i<tamanho2; i++){
            vazio = linhaJogadas.find(" ");
            str3 = linhaJogadas.substr(0,vazio); //pega o elemento antes do primeiro " " da string
            jogadaPorJogada.push_back(str3); //joga esse elemento no vetor de jogadas
            linhaJogadas.erase(0,vazio+1); //apaga esse primeiro elemento

            // verifica se o elemento da vez é o ultimo da string, se for, para o loop
            if (str3.compare(ultimo)==0){
                i=tamanho2;
            }
        }
    }
    tamanho = jogadaPorJogada.size();
    for (int i=0; i<tamanho; i++){
        if (i%2==0){
            str3 = jogadaPorJogada[i];
            ponto = str3.find(".");
            str3 = str3.substr(ponto+1);
            jogadasTabuleiro.push_back(str3);
        }else {
            jogadasTabuleiro.push_back(jogadaPorJogada[i]);
        }
    }
    
    
};

void Movimentos::getInfoPartida() {
    for (int i=0 ; i<11; i++){
        std::cout <<infoPartida[i] << std::endl;
    } 
};

std::vector<std::string> Movimentos::getJogadas(){
    return jogadaPorJogada;
};

std::vector<std::string> Movimentos::getJogadasTabuleiro(){
    return jogadasTabuleiro;
}