#pragma once
#include <string>
#include <iostream>
#include "Colecao.h"
#include "Equipa.h"
#include "Ronda.h"
using namespace std;

class Torneio {
    int codigo;                 
    string nome;                
    string dataInicio;          
    Colecao<Equipa> equipas;   
    Colecao<Ronda> rondas;     
    static int proxCodigo;
	static const int MAX_EQUIPAS = 20;
 
public:
    
    Torneio(string n , string d );
    void adicionarEquipa(const Equipa& e);
    void gerarPrimeiraRonda();
	void gerarRondaSeguinte();
    void mostrar() const;


};
