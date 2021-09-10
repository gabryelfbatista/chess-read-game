#include "tabuleiro.h"
#include "engine.h"
#include "movimentos.h"
#include <iostream>
#include <conio.h>

Engine::Engine(std::string nomearq){
    Movimentos movimentos(nomearq);
    movimentos.separaJogadas();
    movimentos.getInfoPartida();
    jogadas = movimentos.getJogadas();

    Tabuleiro tabuleiro;
    tabuleiro.carrega_tabuleiro();
    tabuleiro.imprime_tabuleiro();
    menu();
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