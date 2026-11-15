#include "Torneio.h"


int main() {

	// Criar o torneio
	Torneio t("ESTIG Games", "17/12/2025");

	// Criar equipas
	Equipa e1("Informatica");
	Equipa e2("Contabilidade");
	Equipa e3("Gestao");
	Equipa e4("Civil");

	// Criar jogadores e adicioná-los às equipas
	e1.adicionarJogador(Jogador(1, "Pedro", "pedroEI"));
	e1.adicionarJogador(Jogador(2, "Rui", "ruiEI"));

	e2.adicionarJogador(Jogador(3, "Luis", "luisCONT"));
	e2.adicionarJogador(Jogador(4, "Marta", "martaCONT"));

	e3.adicionarJogador(Jogador(5, "Ana", "anaGEST"));
	e3.adicionarJogador(Jogador(6, "Joao", "joaoGEST"));

	e4.adicionarJogador(Jogador(7, "Sofia", "sofiaCIV"));
	e4.adicionarJogador(Jogador(8, "Carlos", "carlosCIV"));
	
	// Adicionar equipas ao torneio
	t.adicionarEquipa(e1);
	t.adicionarEquipa(e2);
	t.adicionarEquipa(e3);
	t.adicionarEquipa(e4);

	// Gerar automaticamente a primeira ronda 
	t.gerarPrimeiraRonda();

	// Mostrar informação do torneio
	t.mostrar();

	return 0;
};