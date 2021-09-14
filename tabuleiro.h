#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <vector>
#include <string>


class Tabuleiro {
public:
    Tabuleiro();
    ~Tabuleiro();
    void carregaTabuleiro();
    void imprimeTabuleiro();
    void verificaJogada(std::string, int);
    void setPosicaoPeca(int, int, int, int);
private:
    char tabuleiros[33][48]; //tamanho do tabuleiro
    unsigned char bordas = 35; //bordas = #
    // uma matriz com as peças
    char pecas[8][8] = {{'T', 'C', 'B', 'Q', 'K', 'B', 'C', 'T'},
                       {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'t', 'c', 'b', 'q', 'k', 'b', 'c', 't'}};

};

#endif