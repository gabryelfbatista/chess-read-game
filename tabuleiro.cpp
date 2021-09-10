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
    
    tabuleiros[2][3] = pecas[0][0];
    tabuleiros[2][9] = pecas[0][1];
    tabuleiros[2][15] = pecas[0][2];
    tabuleiros[2][21] = pecas[0][3];
    tabuleiros[2][27] = pecas[0][4];
    tabuleiros[2][33] = pecas[0][5];
    tabuleiros[2][39] = pecas[0][6];
    tabuleiros[2][45] = pecas[0][7];
    tabuleiros[6][3] = pecas[1][0];
    tabuleiros[6][9] = pecas[1][1];
    tabuleiros[6][15] = pecas[1][2];
    tabuleiros[6][21] = pecas[1][3];
    tabuleiros[6][27] = pecas[1][4];
    tabuleiros[6][33] = pecas[1][5];
    tabuleiros[6][39] = pecas[1][6];
    tabuleiros[6][45] = pecas[1][7];
    tabuleiros[10][3] = pecas[2][0];
    tabuleiros[10][9] = pecas[2][1];
    tabuleiros[10][15] = pecas[2][2];
    tabuleiros[10][21] = pecas[2][3];
    tabuleiros[10][27] = pecas[2][4];
    tabuleiros[10][33] = pecas[2][5];
    tabuleiros[10][39] = pecas[2][6];
    tabuleiros[10][45] = pecas[2][7];
    tabuleiros[14][3] = pecas[3][0];
    tabuleiros[14][9] = pecas[3][1];
    tabuleiros[14][15] = pecas[3][2];
    tabuleiros[14][21] = pecas[3][3];
    tabuleiros[14][27] = pecas[3][4];
    tabuleiros[14][33] = pecas[3][5];
    tabuleiros[14][39] = pecas[3][6];
    tabuleiros[14][45] = pecas[3][7];
    tabuleiros[18][3] = pecas[4][0];
    tabuleiros[18][9] = pecas[4][1];
    tabuleiros[18][15] = pecas[4][2];
    tabuleiros[18][21] = pecas[4][3];
    tabuleiros[18][27] = pecas[4][4];
    tabuleiros[18][33] = pecas[4][5];
    tabuleiros[18][39] = pecas[4][6];
    tabuleiros[18][45] = pecas[4][7];
    tabuleiros[22][3] = pecas[5][0];
    tabuleiros[22][9] = pecas[5][1];
    tabuleiros[22][15] = pecas[5][2];
    tabuleiros[22][21] = pecas[5][3];
    tabuleiros[22][27] = pecas[5][4];
    tabuleiros[22][33] = pecas[5][5];
    tabuleiros[22][39] = pecas[5][6];
    tabuleiros[22][45] = pecas[5][7];
    tabuleiros[26][3] = pecas[6][0];
    tabuleiros[26][9] = pecas[6][1];
    tabuleiros[26][15] = pecas[6][2];
    tabuleiros[26][21] = pecas[6][3];
    tabuleiros[26][27] = pecas[6][4];
    tabuleiros[26][33] = pecas[6][5];
    tabuleiros[26][39] = pecas[6][6];
    tabuleiros[26][45] = pecas[6][7];
    tabuleiros[30][3] = pecas[7][0];
    tabuleiros[30][9] = pecas[7][1];
    tabuleiros[30][15] = pecas[7][2];
    tabuleiros[30][21] = pecas[7][3];
    tabuleiros[30][27] = pecas[7][4];
    tabuleiros[30][33] = pecas[7][5];
    tabuleiros[30][39] = pecas[7][6];
    tabuleiros[30][45] = pecas[7][7];



    
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
};

void Tabuleiro::setPosicaoPeca(int lin, int col){
}

