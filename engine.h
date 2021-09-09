#ifndef ENGINE_H
#define ENGINE_H


class Engine{
public:
    Engine(std::string);
    ~Engine();
    void menu();
private:
    unsigned char enter = 13;
    unsigned char letra_q = 113;
    std::vector<std::string> jogadas;
};

#endif