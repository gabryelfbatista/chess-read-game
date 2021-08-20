#ifndef PECAS_H
#define PECAS_H

#include <vector>
#include <string>


class Pecas {
public:
    Pecas();
    ~Pecas();
    void imprime_tabuleiro();
private:
    std::vector<char> A = {'T', 'C', 'B', 'K', 'Q', 'B', 'C', 'T'};
    std::vector<char> B = {'T', 'C', 'B', 'K', 'Q', 'B', 'C', 'T'};
    std::vector<char> C = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> D = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> E = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> F = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    std::vector<char> G = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'};
    std::vector<char> H = {'T', 'C', 'B', 'K', 'Q', 'B', 'C', 'T'};

};

#endif