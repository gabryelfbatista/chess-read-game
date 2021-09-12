#ifndef MOVIMENTOS_H
#define MOVIMENTOS_H

#include <fstream>
#include <vector>
#include <string>


class Movimentos{
public:
    Movimentos(std::string);
    ~Movimentos();
    void separaJogadas();
    void getInfoPartida();
    std::vector<std::string> getJogadas();
    std::vector<std::string> getJogadasTabuleiro();
private:
    std::string nomearq;
    std::ifstream arquivo;
    
    std::vector<std::string> jogadas;
    std::vector<std::string> linhas;
    
    
    std::vector<std::string> jogadaPorJogada; //onde sera salvo movimento por movimento para futura impressao
    std::vector<std::string> jogadasTabuleiro; //vetor onde sera salvo as jogadas sem o numero da rodada, servirá para carregar o tabuleiro
    std::string ultimo; // pega o ultimo elemento da linha de movimentos do vetor linha_jogadas
    std::vector<std::string> infoPartida;
};

#endif
