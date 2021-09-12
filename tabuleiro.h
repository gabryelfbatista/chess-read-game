#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <vector>
#include <string>


class Tabuleiro {
public:
    Tabuleiro();
    ~Tabuleiro();
    void carrega_tabuleiro();
    void imprime_tabuleiro();
    void verifica_jogada(std::string, int);
    void setPosicaoPeca(int, int, int, int);
private:
    char tabuleiros[33][48];
    unsigned char bordas = 35;
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