#include "tabuleiro.h"
#include <iostream>
#include <vector>
#include <string>

Tabuleiro::Tabuleiro(){};
Tabuleiro::~Tabuleiro(){};

void Tabuleiro::carrega_tabuleiro(){
    /*
    for (int i=0; i<45 ; i++){
        if ((i>=1 && i<4) || (i>=5 && i<8) || (i>= 9 && i<13)){
            for (int x=0; x<8; x++){
                std::cout << bordas<< "     ";
                if (x==7){
                    std::cout << bordas << std::endl;
                }
            }
        }else {
            for (int j=0; j<48; j++){
                std::cout << bordas;
                if (j==47){
                std::cout << bordas<< std::endl;
                }
            }   
        }                      
    }
    */
    for (int i=0; i<33; i++){
        for (int j=0; j<49; j++){
            tabuleiros[i][j] = bordas;
            if (i!=0 && i!= 4 && i!=8 && i!=12 && i!=16 && i!=20 && i!=24 && i!=28 && i!=32 && j!=0 && j!=6 && j!= 12 && j!= 18 && j!= 24 && j!= 30 && j!= 36 && j!= 42 && j!= 48){
                tabuleiros[i][j] = ' ';
            }
        }
    }   
    
    tabuleiros[2][3] = A[0];
    tabuleiros[2][9] = A[1];
    tabuleiros[2][15] = A[2];
    tabuleiros[2][21] = A[3];
    tabuleiros[2][27] = A[4];
    tabuleiros[2][33] = A[5];
    tabuleiros[2][39] = A[6];
    tabuleiros[2][45] = A[7];
    tabuleiros[6][3] = B[0];
    tabuleiros[6][9] = B[1];
    tabuleiros[6][15] = B[2];
    tabuleiros[2][21] = B[3];
    tabuleiros[2][27] = B[4];
    tabuleiros[2][33] = B[5];
    tabuleiros[2][39] = B[6];
    tabuleiros[2][45] = B[7];

    
};

void Tabuleiro::imprime_tabuleiro(){
    for (int i=0; i<33; i++){
        for (int j=0; j<49; j++){
            if (j==48){
                std::cout << tabuleiros[i][j] << std::endl;  
            }else {
                std::cout << tabuleiros[i][j];
            }
           
            
        }
    }   
}

