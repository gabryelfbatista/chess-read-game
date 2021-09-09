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
private:
    char tabuleiros[33][48];
    unsigned char bordas = 35;
    std::vector<char> A = {'T', 'C', 'B', 'K', 'Q', 'B', 'C', 'T'};
    std::vector<char> B = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'};
    std::vector<char> C = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> D = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> E = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> F = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> G = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'};
    std::vector<char> H = {'T', 'C', 'B', 'K', 'Q', 'B', 'C', 'T'};

};

#endif