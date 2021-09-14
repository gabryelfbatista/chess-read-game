#include "movimentos.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

/* A classe movimentos é responsavel por ler o arquivo pgn, separar os dados e as jogadas*/

Movimentos::Movimentos(std::string arq):nomearq(arq){};
Movimentos::~Movimentos(){};

// a funçao separaJogadas le o arquivo pgn, separa as informaçoes da partida e as jogadas

void Movimentos::separaJogadas(){
    std::size_t ponto; //vai pegar o "." para poder salvar cada string da jogada sem o numero da rodada
    std::size_t vazio; // vai pegar o primeiro espaço entre os movimentos
    std::string str3; // vai ser onde sera salvo cada movimento de cada jogador
    std::size_t posicaoUltimo; //pra pegar onde esta o ultimo elemento
    std::string linhaJogadas; // pega a linha do vetor linhas pra poder ir retirando jogada por jogada
    int tamanho;// tamanho e tamanho2 servem apenas pra auxiliar nos loops
    int tamanho2;
    std::string linha;// pega linha por linha do arquivo
    std::vector<std::string> linhas;//salva as linhas do arquivo

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
        this->infoPartida.push_back(linhas[i]);
    } 
    
    /*agora ele vai salvar no vetor jogadas as linhas do vetor linha 
    (isso é pq o arquivo pgn tem um padrao de 10 linhas com os dados das jogadas
    e a partir da 11 vem as jogadas de cada jogador)
    */
    for (int i=11 ; i<tamanho; i++){
        this->jogadas.push_back(linhas[i]);
    } 
    tamanho = jogadas.size(); //pega o tamanho do vetor de jogadas

    for (int i = 0; i<tamanho; i++){
        linhaJogadas = this->jogadas[i]; //pega o elemento do vetor jogadas e transforma apenas numa string
        tamanho2 = linhaJogadas.size(); //pega o tamanho dessa string
        posicaoUltimo = linhaJogadas.find_last_of(" "); //pega a posicao do ultimo elemento
        ultimo = linhaJogadas.substr(posicaoUltimo+1); // pega qual e o ultimo elemento
        for (int i=0; i<tamanho2; i++){
            vazio = linhaJogadas.find(" ");
            str3 = linhaJogadas.substr(0,vazio); //pega o elemento antes do primeiro " " da string
            this->jogadaPorJogada.push_back(str3); //joga esse elemento no vetor de jogadas
            linhaJogadas.erase(0,vazio+1); //apaga esse primeiro elemento
            // verifica se o elemento da vez é o ultimo da string, se for, para o loop
            if (linhaJogadas.size()<=7 && str3.compare(ultimo)==0){
                i=tamanho2;
            }
        }
    }
    tamanho = this->jogadaPorJogada.size();

    //aqui vai salvar jogada por jogada (sem o numero da rodada) pra enviar pra classe tabuleiro verificar
    for (int i=0; i<tamanho; i++){
        if (i%2==0){
            str3 = this->jogadaPorJogada[i];
            ponto = str3.find(".");
            str3 = str3.substr(ponto+1);
            this->jogadasTabuleiro.push_back(str3);
        }else {
            this->jogadasTabuleiro.push_back(jogadaPorJogada[i]);
        }
    }
    
    
};

//imprime as informaçoes da partida
void Movimentos::getInfoPartida() {
    for (int i=0 ; i<11; i++){
        std::cout <<infoPartida[i] << std::endl;
    } 
};

//retorna as jogadas que foram separadas
std::vector<std::string> Movimentos::getJogadas(){
    return this->jogadaPorJogada;
};

//retornam as jogadas sem a rodada pra mandar pro tabuleiro
std::vector<std::string> Movimentos::getJogadasTabuleiro(){
    return this->jogadasTabuleiro;
}