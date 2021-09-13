#include "tabuleiro.h"
#include <iostream>
#include <vector>
#include <string>

Tabuleiro::Tabuleiro(){};
Tabuleiro::~Tabuleiro(){};

void Tabuleiro::carrega_tabuleiro(){
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


void Tabuleiro::verifica_jogada(std::string jogada, int vezJogador){
    if (vezJogador==1){

// ---------------------------- MOVIMENTOS DOS PEOES -------------------------

        if (jogada.compare("a3")==0){
            if (pecas[6][0]=='p'){
                this->setPosicaoPeca(6,0,5,0);
            }  
        }
        
        if (jogada.compare("a4")==0){
            if (pecas[6][0]=='p'){
                this->setPosicaoPeca(6,0,4,0);
            }
            if (pecas[5][0]=='p'){
                this->setPosicaoPeca(5,0,4,0);
            }    
        }

        if (jogada.compare("a5")==0){
            if (pecas[4][0]=='p'){
                this->setPosicaoPeca(4,0,3,0);
            }
        }

        if (jogada.compare("axb6")==0){
            if (pecas[3][0]=='p'){
                this->setPosicaoPeca(3,0,2,1);
            }  
        }

        if (jogada.compare("b4")==0){
            if (pecas[6][1]=='p'){
                this->setPosicaoPeca(6,1,4,1);
            }
            if (pecas[5][1]=='p'){
                this->setPosicaoPeca(5,1,4,1);
            }    
        }

        if (jogada.compare("b5")==0){
            if (pecas[4][1]=='p'){
                this->setPosicaoPeca(4,1,3,1);
            }
        }

        if (jogada.compare("bxc3")==0){
            if (pecas[6][1]=='p'){
                this->setPosicaoPeca(6,1,5,2);
            }
        }

        if (jogada.compare("c3")==0){
            this->setPosicaoPeca(6,2,5,2);
        }

        if (jogada.compare("c4")==0){
            if (pecas[6][2]=='p'){
                this->setPosicaoPeca(6,2,4,2);
            }
            if (pecas[5][2]=='p'){
                this->setPosicaoPeca(5,2,4,2);
            }
        }

        if (jogada.compare("cxd4")==0){
            if (pecas[5][2]=='p'){
                this->setPosicaoPeca(5,2,4,3);
            }
        }
        
        if (jogada.compare("e3")==0){
            this->setPosicaoPeca(6,4,5,4);
        }

        if (jogada.compare("e4")==0){
            if(pecas[6][4]=='p'){
                this->setPosicaoPeca(6,4,4,4);
            }
            if(pecas[5][4]=='p'){
                this->setPosicaoPeca(5,4,4,4);
            }
        }
        
        if (jogada.compare("d3")==0){
            this->setPosicaoPeca(6,3,5,3);
        }
        if (jogada.compare("h3")==0){
            this->setPosicaoPeca(6,7,5,7);
        }
        if (jogada.compare("d4")==0){
            if(pecas[6][3]=='p'){
                this->setPosicaoPeca(6,3,4,3);
            }
            if(pecas[5][3]=='p'){
                this->setPosicaoPeca(5,3,4,3);
            }
        }
        
        if (jogada.compare("h4")==0){
            if (pecas[6][7]=='p'){
                this->setPosicaoPeca(6,7,4,7);
            }
            if (pecas[5][7]=='p'){
                this->setPosicaoPeca(5,7,4,7);
            }
        }

        if (jogada.compare("e6")==0){
            if (pecas[3][4]=='p'){
                this->setPosicaoPeca(3,4,2,4);
            }  
        }

        if (jogada.compare("g6")==0){
            this->setPosicaoPeca(3,6,2,6);
        }
        if (jogada.compare("dxe5")==0){
            this->setPosicaoPeca(4,3,3,4);
        }
        if (jogada.compare("fxg3")==0){
            this->setPosicaoPeca(6,5,5,6);
        }

        if (jogada.compare("hxg5")==0){
            if (pecas[4][7]=='p'){
                this->setPosicaoPeca(4,7,3,6);
            } 
        }
// ---------------------------- FIM MOVIMENTOS DOS PEOES -------------------------

// ---------------------------- MOVIMENTOS DOS CAVALOS -------------------------

        if (jogada.compare("Nf3")==0){
            if (pecas[7][6]=='c'){
                this->setPosicaoPeca(7,6,5,5);
            }
            if (pecas[3][4]=='c'){
                this->setPosicaoPeca(3,4,5,5);
            }  
        }

        if (jogada.compare("Nxe5")==0){
            this->setPosicaoPeca(5,5,3,4);
        }

        if (jogada.compare("Nb3")==0){
            this->setPosicaoPeca(4,3,5,1);
        }

        if (jogada.compare("Na5")==0){
            this->setPosicaoPeca(5,1,3,0);
        }

        if (jogada.compare("Nc3")==0){
            this->setPosicaoPeca(7,1,5,2);
        }

        if (jogada.compare("Nxc6")==0){
            if (pecas[3][0]=='c'){
                this->setPosicaoPeca(3,0,2,2);
            }
        }

        if (jogada.compare("Nd5")==0){
            this->setPosicaoPeca(5,2,3,3);
        }

        if (jogada.compare("Ne7+")==0){
            this->setPosicaoPeca(3,3,1,4);
        }
        if (jogada.compare("Nxd4")==0){
            this->setPosicaoPeca(5,5,4,3);
        }
        if (jogada.compare("Ne2")==0){
            this->setPosicaoPeca(5,2,6,4);
        }
        if (jogada.compare("Nd4")==0){
            this->setPosicaoPeca(6,4,4,3);
        }

// ---------------------------- FIM MOVIMENTOS DOS CAVALOS -------------------------

// ---------------------------- MOVIMENTOS DOS BISPOS -------------------------

        if (jogada.compare("Bxf6")==0){
            this->setPosicaoPeca(3,6,2,5);
        }
        
        if (jogada.compare("Bb2")==0){
            if (pecas[7][2]=='b'){
                this->setPosicaoPeca(7,2,6,1);
            }
        }

        if (jogada.compare("Bb5")==0){
            this->setPosicaoPeca(7,5,3,1);
        }

        if (jogada.compare("Ba4")==0){
            this->setPosicaoPeca(3,1,4,0);
        }

        if (jogada.compare("Bxc4")==0){
            if (pecas[5][3]=='b'){
                this->setPosicaoPeca(5,3,4,2);
            }
        }

        if (jogada.compare("Bd3")==0){
            if (pecas[7][5]=='b'){
                this->setPosicaoPeca(7,5,5,3);
            }
            
        }

        if (jogada.compare("Be2")==0){
            if (pecas[4][2]=='b'){
                this->setPosicaoPeca(4,2,6,4);
            }
        }
        
        if (jogada.compare("Bxe2")==0){
            this->setPosicaoPeca(7,5,6,4);
        }

        if (jogada.compare("Bg5")==0){
            if (pecas[7][2]=='b'){
                this->setPosicaoPeca(7,2,3,6);
            } 
        }
        if (jogada.compare("Bc2")==0){
            this->setPosicaoPeca(4,0,6,2);
        }
        if (jogada.compare("Bxe4")==0){
            this->setPosicaoPeca(6,2,4,4);
        }

// ---------------------------- FIM MOVIMENTOS DOS BISPOS -------------------------

// ---------------------------- MOVIMENTOS DAS TORRES -------------------------

        if (jogada.compare("O-O-O")==0){
            this->setPosicaoPeca(7,4,7,2);
            this->setPosicaoPeca(7,0,7,3);
        }

        if (jogada.compare("Rc7")==0){
            if(pecas[1][7]=='t'){
                this->setPosicaoPeca(1,7,1,2);
            }   
        }

        if (jogada.compare("Rfc1")==0){
            if (pecas[7][5]=='t'){
                this->setPosicaoPeca(7,5,7,2);
            }
        }

        if (jogada.compare("Rhe1")==0){
            this->setPosicaoPeca(7,7,7,4);
        }

        if (jogada.compare("Rxd1")==0){
            this->setPosicaoPeca(7,5,7,3);
        }

        if (jogada.compare("Rad1")==0){
            this->setPosicaoPeca(7,0,7,3);
        }
        
        if (jogada.compare("Rd2")==0){
            this->setPosicaoPeca(7,3,6,3);
        }

        if (jogada.compare("Re1")==0){
            if(pecas[7][3]=='t'){
                this->setPosicaoPeca(7,3,7,4);
            }
            if(pecas[3][4]=='t'){
                this->setPosicaoPeca(3,4,7,4);
            }  
            if(pecas[7][2]=='t'){
                this->setPosicaoPeca(7,2,7,4);
            }  
        }

        if (jogada.compare("Re6")==0){
            if(pecas[2][6]=='t'){
                this->setPosicaoPeca(2,6,2,4);
            }   
        }

        if (jogada.compare("Rh4")==0){
            if(pecas[4][4]=='t'){
                this->setPosicaoPeca(4,4,4,7);
            }   
        }

        if (jogada.compare("Rh7")==0){
            if(pecas[4][7]=='t'){
                this->setPosicaoPeca(4,7,1,7);
            }   
        }

        if (jogada.compare("Rxe1")==0){
            if(pecas[7][3]=='t'){
                this->setPosicaoPeca(7,3,7,4);
            }   
        }

        if (jogada.compare("Rxe4")==0){
            if(pecas[7][4]=='t'){
                this->setPosicaoPeca(7,4,4,4);
            }   
        }

        if (jogada.compare("Rxe5+")==0){
            if(pecas[2][4]=='t'){
                this->setPosicaoPeca(2,4,3,4);
            }   
        }

        if (jogada.compare("Rxg2")==0){
            if(pecas[6][3]=='t'){
                this->setPosicaoPeca(6,3,6,6);
            }
        }

        if (jogada.compare("Rxg6+")==0){
            if(pecas[6][6]=='t'){
                this->setPosicaoPeca(6,6,2,6);
            }   
        }

        

// ---------------------------- FIM MOVIMENTOS DAS TORRES -------------------------

        if (jogada.compare("Qe2")==0){
            this->setPosicaoPeca(7,3,6,4);
        }

        if (jogada.compare("Qxe2")==0){
            this->setPosicaoPeca(7,3,6,4);
        }


        if (jogada.compare("O-O")==0){
            this->setPosicaoPeca(7,4,7,6);
            this->setPosicaoPeca(7,7,7,5);
        }

        if (jogada.compare("Kf2")==0){
            if (pecas[7][6]=='k'){
                this->setPosicaoPeca(7,6,6,5);
            }
        }

        if (jogada.compare("Kg1")==0){
            if (pecas[6][7]=='k'){
                this->setPosicaoPeca(6,7,7,6);
            }
        }

        if (jogada.compare("Kg3")==0){
            if (pecas[6][5]=='k'){
                this->setPosicaoPeca(6,5,5,6);
            }
        }

        if (jogada.compare("Kxh1")==0){
            if (pecas[7][6]=='k'){
                this->setPosicaoPeca(7,6,7,7);
            }
        }  

        if (jogada.compare("Kh2")==0){
            if (pecas[5][6]=='k'){
                this->setPosicaoPeca(5,6,6,7);
            }
        }    
        
    }



    if (vezJogador==2){

// ---------------------------- MOVIMENTOS DOS PEOES -------------------------
        if (jogada.compare("axb6")==0){
            if (pecas[1][0]=='P'){
                this->setPosicaoPeca(1,0,2,1);
            }  
        }
        
        if (jogada.compare("b6")==0){
            if (pecas[1][1]=='P'){
                this->setPosicaoPeca(1,1,2,1);
            }  
        }

        if (jogada.compare("c5")==0){
            if (pecas[1][2]=='P'){
                this->setPosicaoPeca(1,2,3,2);
            }
            if (pecas[2][2]=='P'){
                this->setPosicaoPeca(2,2,3,2);
            }
        }

        if (jogada.compare("c6")==0){
            this->setPosicaoPeca(1,2,2,2);
        }

        if (jogada.compare("cxd4")==0){
            if (pecas[3][2]=='P'){
                this->setPosicaoPeca(3,2,4,3);
            }
        }

        if (jogada.compare("e5")==0){
            if (pecas[1][4]=='P'){
                this->setPosicaoPeca(1,4,3,4);
            }
            if (pecas[2][4]=='P'){
                this->setPosicaoPeca(2,4,3,4);
            }
        }

        if (jogada.compare("e6")==0){
            if (pecas[1][4]=='P'){
                this->setPosicaoPeca(1,4,2,4);
            }  
        }

        if (jogada.compare("d6")==0){
            this->setPosicaoPeca(1,3,2,3);
        }

        if (jogada.compare("dxc4")==0){
            if (pecas[3][3]=='P'){
                this->setPosicaoPeca(3,3,4,2);
            }
            
        }

        if (jogada.compare("g5")==0){
            this->setPosicaoPeca(1,6,3,6);
        }

        if (jogada.compare("dxe4")==0){
            this->setPosicaoPeca(3,3,4,4);
        }

        if (jogada.compare("d5")==0){
            if(pecas[1][3]=='P'){
                this->setPosicaoPeca(1,3,3,3);
            }
            if(pecas[2][3]=='P'){
                this->setPosicaoPeca(2,3,3,3);
            }
        }

        if (jogada.compare("g3")==0){
            if (pecas[4][6]=='P'){
                this->setPosicaoPeca(4,6,5,6);
            }   
        }

        if (jogada.compare("g4")==0){
            if (pecas[3][6]=='P'){
                this->setPosicaoPeca(3,6,4,6);
            }
        }

        if (jogada.compare("fxe6")==0){
            this->setPosicaoPeca(1,5,2,4); 
        }

        if (jogada.compare("h6")==0){
            if (pecas[1][7]=='p'){
                this->setPosicaoPeca(1,7,2,7);
            }
        }

        if (jogada.compare("hxg6")==0){
            this->setPosicaoPeca(1,7,2,6);
        }

// ---------------------------- FIM MOVIMENTOS DOS PEOES -------------------------

// ---------------------------- MOVIMENTOS DOS CAVALOS -------------------------

        if (jogada.compare("Nf6")==0){
            if (pecas[0][6]=='C'){
                setPosicaoPeca(0,6,2,5);
            }
            if (pecas[4][4]=='C'){
                setPosicaoPeca(4,4,2,5);
            }   
        }

        if (jogada.compare("Nbd7")==0){
            this->setPosicaoPeca(0,1,1,3);
        }

        if (jogada.compare("Nxe4")==0){
            this->setPosicaoPeca(2,5,4,4);
        }

        if (jogada.compare("Nc6")==0){
            this->setPosicaoPeca(0,1,2,2);
        }

        if (jogada.compare("Nxe7")==0){
            this->setPosicaoPeca(2,2,1,4);
        }
        
        if (jogada.compare("Nd4")==0){
            this->setPosicaoPeca(2,2,4,3);
        }
        
// ---------------------------- FIM MOVIMENTOS DOS CAVALOS -------------------------

// ---------------------------- MOVIMENTOS DOS BISPOS -------------------------

        if (jogada.compare("Ba6")==0){
            if (pecas[0][2]=='B'){
                this->setPosicaoPeca(0,2,2,0);
            } 
        }
        
        if (jogada.compare("Bb4")==0){
            if (pecas[0][5]=='B'){
                this->setPosicaoPeca(0,5,4,1);
            }
        }
        
        if (jogada.compare("Bd7")==0){
            this->setPosicaoPeca(0,2,1,3);
        }

        if (jogada.compare("Bxe2")==0){
            if (pecas[2][0]=='B'){
                this->setPosicaoPeca(2,0,6,4);
            }  
        }
        
        if (jogada.compare("Be7")==0){
            this->setPosicaoPeca(0,5,1,4);
        }

        if (jogada.compare("Bxf6")==0){
            this->setPosicaoPeca(1,4,2,5);
        }

        if (jogada.compare("Bxg2+")==0){
            if (pecas[2][2]=='B'){
                this->setPosicaoPeca(2,2,6,6);
            }
        }

        if (jogada.compare("Bxc3+")==0){
            if (pecas[4][1]=='B'){
                this->setPosicaoPeca(4,1,5,2);
            }
        }

        if (jogada.compare("Bxc6")==0){
            if (pecas[3][3]=='B'){
                this->setPosicaoPeca(3,3,2,2);
            }
        }

        if (jogada.compare("Bd4")==0){
            this->setPosicaoPeca(2,5,4,3);
        }

        if (jogada.compare("Bd5")==0){
            this->setPosicaoPeca(2,4,3,3);
        }
        
        if (jogada.compare("Bb6")==0){
            this->setPosicaoPeca(4,3,2,1);
        }

        if (jogada.compare("Bc5")==0){
            this->setPosicaoPeca(0,5,3,2);
        }

        if (jogada.compare("Bxd4")==0){
            this->setPosicaoPeca(3,2,4,3);
        }
        
        
        
        if (jogada.compare("Bd8")==0){
            this->setPosicaoPeca(2,1,0,3);
        }
        
        if (jogada.compare("Bxg5")==0){
            if (pecas[0][3]=='B'){
                this->setPosicaoPeca(0,3,3,6);
            } 
        }
        
        if (jogada.compare("Be6")==0){
            if (pecas[1][3]=='B')
            this->setPosicaoPeca(1,3,2,4);
        }

// ---------------------------- FIM MOVIMENTOS DOS BISPOS -------------------------

// ---------------------------- MOVIMENTOS DAS TORRES -------------------------

        if (jogada.compare("Rac8")==0){
            if (pecas[0][0]=='T'){
                this->setPosicaoPeca(0,0,0,2);
            }
        }
        
        if (jogada.compare("Rg8")==0){
            this->setPosicaoPeca(0,7,0,6);
        }

        if (jogada.compare("Rg3")==0){
            if (pecas[4][6]=='T'){
                this->setPosicaoPeca(4,6,5,6);
            }
        }
        
        if (jogada.compare("Rxg3")==0){
            this->setPosicaoPeca(0,6,5,6);
        }

        if (jogada.compare("Rxc7")==0){
            if(pecas[5][2]=='T'){
                this->setPosicaoPeca(5,2,1,2);
            }   
        }

        if (jogada.compare("Rc1+")==0){
            if(pecas[5][2]=='T'){
                this->setPosicaoPeca(5,2,7,2);
            }  
        }

        if (jogada.compare("Rxc3")==0){
            if(pecas[5][6]=='T'){
                this->setPosicaoPeca(5,6,5,2);
            }  
        }

        if (jogada.compare("Rc5")==0){
            if(pecas[1][2]=='T'){
                this->setPosicaoPeca(1,2,3,2);
            }  
        }

        if (jogada.compare("Rc3+")==0){
            if(pecas[7][2]=='T'){
                this->setPosicaoPeca(7,2,5,2);
            }  
        }

        if (jogada.compare("Rg4")==0){
            if(pecas[5][6]=='T'){
                this->setPosicaoPeca(5,6,4,6);
            }   
        }

        if (jogada.compare("Rg5")==0){
            if(pecas[3][2]=='T'){
                this->setPosicaoPeca(3,2,3,6);
            }   
        }

        if (jogada.compare("Rb8")==0){
            this->setPosicaoPeca(0,0,0,1);
        }

        if (jogada.compare("Rf8")==0){
            if (pecas[0][1]=='T'){
                this->setPosicaoPeca(0,1,0,5);
            }
        }

        if (jogada.compare("Rh1+")==0){
            if (pecas[0][7]=='T'){
                this->setPosicaoPeca(0,7,7,7);
            }
        }

        if (jogada.compare("Rh8+")==0){
            if (pecas[0][5]=='T'){
                this->setPosicaoPeca(0,5,0,7);
            }
        }

// ---------------------------- FIM MOVIMENTO DAS TORRES -------------------------


        if (jogada.compare("Qb7")==0){
            if (pecas[1][2]=='Q'){
                this->setPosicaoPeca(1,2,1,1);
            }
        }

        if (jogada.compare("Qc7")==0){
            if (pecas[0][3]=='Q'){
                this->setPosicaoPeca(0,3,1,2);
            }
        }
        
        if (jogada.compare("Qe7")==0){
            if(pecas[0][3]=='Q'){
                this->setPosicaoPeca(0,3,1,4);
            }
        }
        
        
        if (jogada.compare("Qxe2+")==0){
            this->setPosicaoPeca(1,4,6,4);
        }

        if (jogada.compare("Qxd1")==0){
            this->setPosicaoPeca(0,3,7,3);
        }

        if (jogada.compare("Kxb5")==0){
            if (pecas[3][2]=='K'){
                this->setPosicaoPeca(3,2,3,1);
            } 
        }
        
        if (jogada.compare("Kc5")==0){
            if (pecas[3][3]=='K'){
                this->setPosicaoPeca(3,3,3,2);
            } 
        }

        if (jogada.compare("Kd5")==0){
            if (pecas[2][4]=='K'){
                this->setPosicaoPeca(2,4,3,3);
            } 
        }

        if (jogada.compare("Ke6+")==0){
            if (pecas[2][5]=='K'){
                this->setPosicaoPeca(2,5,2,4);
            } 
        }

        if (jogada.compare("Ke7")==0){
            if (pecas[0][4]=='K'){
                this->setPosicaoPeca(0,4,1,4);
            } 
        }

        if (jogada.compare("Kf6")==0){
            if (pecas[1][4]=='K'){
                this->setPosicaoPeca(1,4,2,5);
            } 
        }
        
        if (jogada.compare("O-O-O")==0){
            this->setPosicaoPeca(0,4,0,2);
            this->setPosicaoPeca(0,0,0,3);
        }

        if (jogada.compare("O-O")==0){
            this->setPosicaoPeca(0,4,0,6);
            this->setPosicaoPeca(0,7,0,5);
        }
         
    }
}

void Tabuleiro::setPosicaoPeca(int linOri, int colOri, int lin, int col){
    pecas[lin][col] = pecas[linOri][colOri];
    pecas[linOri][colOri] = ' ';
}

