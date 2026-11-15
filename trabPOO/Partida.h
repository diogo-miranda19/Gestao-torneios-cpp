#pragma once
#include <string>
#include <iostream>
#include "Equipa.h"
using namespace std;

class Partida {
    Equipa* e1;          
    Equipa* e2;          
    Equipa* vencedora;  
    string dataHora;   

public:
    
    Partida(Equipa* a = 0, Equipa* b = 0, string d = "");
    void registarResultado(int vencedor);
    Equipa* getVencedora() const;
    void mostrar() const;
    bool operator<(const Partida& p) const;
};
