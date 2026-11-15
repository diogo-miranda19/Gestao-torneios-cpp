#pragma once
#include <iostream>
#include "Colecao.h"
#include "Partida.h"
using namespace std;

class Ronda {
    int codigo;                   
    Colecao<Partida> partidas;     
    static int proxCodigo;        

public:
    
    Ronda();
    void adicionarPartida(const Partida& p);
    const Colecao<Partida>& getPartidas() const;
    void mostrar() const;
    bool operator<(const Ronda& r) const;
};
