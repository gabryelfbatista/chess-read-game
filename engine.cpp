#include "tabuleiro.h"
#include "engine.h"
#include "movimentos.h"
#include <iostream>
#include <conio.h>

/*A classe engine vai ser responsavel por chamar as classes necessarias para rodar o reprodutor de partidas 
de acordo com a opcao do usuario*/

Engine::Engine(std::string nomearq){

    int vezJogador = 1; //essa variável vai ajudar na hora de saber se é o jogador das brancas ou pretas sendo 1 pra brancas e 2 pra pretas
    std::vector<std::string>salvaJogada; //apenas para salvar as jogadas na impressao

    // a seguir temos a engine instanciando as classes dos movimentos e o tabuleiro, separando as jogadas do arquivo pgn e salvando em um vetor de jogadas

    Movimentos *movimentos = new Movimentos(nomearq);
    Tabuleiro *tabuleiro = new Tabuleiro();

    movimentos->separaJogadas();
    jogadas = movimentos->getJogadas();
    jogadasTabuleiro = movimentos->getJogadasTabuleiro();
    

    char Entrada; //pega a variavel que o usuario digitar
    int x=0; //para fazer a contagem do while e das jogadas necessarias
    int tamanho = jogadas.size(); // pega o tamanho do vetor de jogadas pra saber quando parar o loop
    
    // no proximo loop, ele imiprime os dados da partida, carrega e imprime o tabuleiro, assim como as opçoes do usuario
    do{
        system("cls");
        movimentos->getInfoPartida();
        tabuleiro->carregaTabuleiro();
        tabuleiro->imprimeTabuleiro();
        std::cout << std::endl;
        std::cout << "[Enter] = Proxima jogada" << std::endl;
        std::cout << "[q] = Fechar reprodutor" << std::endl;
        Entrada = getch();

        // verifica se entra as opçoes validas
        if (Entrada != letra_q && Entrada != enter){
            std::cout << "Digite uma opcao valida" << std::endl;
            fflush(stdin);
        }
        //se for enter, inicia outro loop, que continuara imprimindo os dados da partida, e carregando as jogadas que sao enviadas a cada enter
        if (Entrada == enter){
            fflush(stdin);
            while (x != tamanho){
                fflush(stdin);
                system("cls");
                movimentos->getInfoPartida();
                //proximo if é pra dizer se é uma peça branca ou preta que se movimenta
                if (x%2==0){
                    vezJogador=1;
                }else{
                    vezJogador=2;
                }

                tabuleiro->verificaJogada(jogadasTabuleiro[x],vezJogador);
                tabuleiro->carregaTabuleiro();
                tabuleiro->imprimeTabuleiro();
                std::cout << std::endl;
                std::cout << "[Enter] = Proxima jogada" << std::endl;
                std::cout << "[q] = Fechar reprodutor" << std::endl;
                std::cout << std::endl;

                salvaJogada.push_back(jogadas[x]);

                for (int i=0; i<salvaJogada.size(); i++){
                    std::cout << salvaJogada[i] << " ";
                    // no proximo if, eu vi que cada linha da impressao tinha 14 elementos, entao coloquei a cada 14 pular linha pra imprimir bonitinho na tela
                    if (i==15 || i==29 || i==43 || i==57 || i==71 || i==85 || i==99 || i==113 || i==127 || i==141 || i==155){
                        std::cout << std::endl;
                    }
                }
                x++;
                Entrada = getch();
                if (Entrada == letra_q){
                    break;
                }
            }
        }
    } while (Entrada != letra_q);
    delete(movimentos);
    delete(tabuleiro);
};
Engine::~Engine(){};
