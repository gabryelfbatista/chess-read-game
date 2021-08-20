#include "pecas.h"
#include <iostream>
#include <vector>
#include <string>

Pecas::Pecas(){};
Pecas::~Pecas(){};

void Pecas::imprime_tabuleiro(){
    for (int i=0; i<7; i++){
        std::cout << A[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << B[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << C[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << D[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << E[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << F[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << G[i] << "   ";
    }
    std::cout << std::endl;
    for (int i=0; i<7; i++){
        std::cout << H[i] << "   ";
    }
    
};

