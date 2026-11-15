#pragma once
#include <string>
#include <iostream>
using namespace std;

class Jogador {
	int numMec; 
	string nome; 
	string nick; 

public:
	
	Jogador(int nm = 0, string n = "", string nk = "");
	int getNumMec() const;
	void mostrar() const;
	bool operator<(const Jogador& j) const;
};