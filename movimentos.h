#ifndef MOVIMENTOS_H
#define MOVIMENTOS_H

#include <fstream>
#include <vector>
#include <string>


class Movimentos{
public:
    Movimentos(std::string);
    ~Movimentos();
    void getInfoPartida();
    std::vector<std::string> getJogadas();
private:
    std::string nomearq;
    std::ifstream arquivo;
    std::string linha;
    std::string linha_jogadas;
    std::vector<std::string> jogadas;
    std::vector<std::string> linhas;
    int tamanho;
    int tamanho2;
    std::size_t vazio; // vai pegar o primeiro espaço entre os movimentos
    std::string str3; // vai ser onde sera salvo cada movimento de cada jogador
    std::size_t tamanho_ultimo; //pra pegar onde esta o ultimo elemento
    std::vector<std::string> jogada_por_jogada; //onde sera salvo movimento por movimento para futura impressao
    std::string ultimo; // pega o ultimo elemento da linha de movimentos do vetor linha_jogadas
};

#endif
