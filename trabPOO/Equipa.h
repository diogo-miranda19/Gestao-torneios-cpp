#pragma once
#include <string>
#include <iostream>
#include "Colecao.h"
#include "Jogador.h"
using namespace std;

class Equipa {
	int codigo;
	string nome;
	Colecao<Jogador> jogadores;
	static int proxCodigo;

public:
	
	Equipa(string n);
	int getCodigo() const;
	string getNome() const;
	void adicionarJogador(const Jogador& j);
	void mostrar() const;
	bool operator<(const Equipa& e) const;
};