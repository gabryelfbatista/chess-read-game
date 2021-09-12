#include "tabuleiro.h"
#include "engine.h"
#include "movimentos.h"
#include <iostream>
#include <conio.h>

Engine::Engine(std::string nomearq){
    int vezJogador = 1;
    std::vector<std::string>salvaJogada; //apenas para salvar as jogadas na impressao
    Movimentos movimentos(nomearq);
    movimentos.separaJogadas();

    jogadas = movimentos.getJogadas();
    jogadasTabuleiro = movimentos.getJogadasTabuleiro();

    Tabuleiro tabuleiro;

    
    char Entrada;
    int x=0;
    int tamanho = jogadas.size();
    
    do{
        movimentos.getInfoPartida();
        tabuleiro.carrega_tabuleiro();
        tabuleiro.imprime_tabuleiro();
        std::cout << "[Enter] = Proxima jogada" << std::endl;
        std::cout << "[q] = Fechar reprodutor" << std::endl;
        Entrada = getch();
        if (Entrada != letra_q && Entrada != enter){
            std::cout << "Digite uma opcao valida" << std::endl;
            fflush(stdin);
        }
        if (Entrada == enter){
            fflush(stdin);
            while (x != tamanho){
                system("cls");
                movimentos.getInfoPartida();
                if (x%2==0){
                    vezJogador=1;
                }else{
                    vezJogador=2;
                }
                tabuleiro.verifica_jogada(jogadasTabuleiro[x],vezJogador);
                tabuleiro.carrega_tabuleiro();
                tabuleiro.imprime_tabuleiro();
                std::cout << "[Enter] = Proxima jogada" << std::endl;
                std::cout << "[q] = Fechar reprodutor" << std::endl;
                salvaJogada.push_back(jogadas[x]);
                for (int i=0; i<salvaJogada.size(); i++){
                    std::cout << salvaJogada[i] << " ";
                }
                x++;
                Entrada = getch();
                if (Entrada == letra_q){
                    break;
                }
            }
        }
    } while (Entrada != letra_q);

};
Engine::~Engine(){};

void Engine::menu(){
    char Entrada;
    int x=0;
    int tamanho = jogadas.size();
    std::cout << "[Enter] = Proxima jogada" << std::endl;
    std::cout << "[q] = Fechar reprodutor" << std::endl;
    do{
        Entrada = getch();
        if (Entrada != letra_q && Entrada != enter){
            std::cout << "Digite uma opcao valida" << std::endl;
            fflush(stdin);
        }
        if (Entrada == enter){
            fflush(stdin);
            while (x != tamanho){
                std::cout << jogadas[x] << " ";
                x++;
                Entrada = getch();
                if (Entrada == letra_q){
                    break;
                }
            }
        }
    } while (Entrada != letra_q);

}