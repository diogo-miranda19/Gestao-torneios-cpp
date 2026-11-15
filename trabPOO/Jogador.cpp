#include "Jogador.h"


// Construtor: inicializa os atributos do jogador
Jogador::Jogador(int nm, string n, string nk) {
	numMec = nm;
	nome = n;
	nick = nk;
}

// Retorna o número mecanográfico
int Jogador::getNumMec() const {
	return numMec;
}

// Mostra os dados do jogador
void Jogador::mostrar() const {
	cout << " Jogador: " << numMec
		<< " - " << nome
		<< " (" << nick << ")" << endl;
}

// Define o critério de ordenação dos jogadores na Colecao
bool Jogador::operator<(const Jogador& j) const {
	return numMec < j.numMec;
}