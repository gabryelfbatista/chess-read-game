#ifndef ENGINE_H
#define ENGINE_H


class Engine{
public:
    Engine(std::string);
    ~Engine();
private:
    unsigned char enter = 13; //codigo ASCII  do enter
    unsigned char letra_q = 113; //codigo ASCII  da tecla q
    std::vector<std::string> jogadas; // salva as jogadas que serao separadas pela classe movimentos
    std::vector<std::string> jogadasTabuleiro; // salva as jogadas que serao separadas pela classe tabuleiro
};

#endif