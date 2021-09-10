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
private:
    std::string nomearq;
    std::ifstream arquivo;
    
    std::string linha_jogadas;

    std::vector<std::string> jogadas;
    std::vector<std::string> linhas;
    
    std::size_t tamanho_ultimo; //pra pegar onde esta o ultimo elemento
    std::vector<std::string> jogada_por_jogada; //onde sera salvo movimento por movimento para futura impressao
    std::string ultimo; // pega o ultimo elemento da linha de movimentos do vetor linha_jogadas
    std::vector<std::string> infoPartida;
};

#endif
