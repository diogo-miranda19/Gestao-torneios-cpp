#include "Equipa.h"

// Inicialização do código automático
int Equipa::proxCodigo = 1;

// Automatizaçao do codigo da equipa
Equipa::Equipa(string n) {
	codigo = proxCodigo++;
	nome = n;
}

// Retorna o código da equipa
int Equipa::getCodigo() const {
	return codigo;
}

// Retorna o nome da equipa
string Equipa::getNome() const {
	return nome;
}

// Adiciona um jogador à coleção da equipa
void Equipa::adicionarJogador(const Jogador& j) {
	jogadores.insert(j);
}

// Mostra os dados da equipa e dos respetivos jogadores
void Equipa::mostrar() const {
	cout << "Equipa " << codigo << ": " << nome << endl;

	Colecao<Jogador>::const_iterator it;
	for (it = jogadores.begin(); it != jogadores.end(); it++)
		it->mostrar();
}

bool Equipa::operator<(const Equipa& e) const {
	return codigo < e.codigo;
}