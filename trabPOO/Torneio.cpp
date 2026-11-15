#include "Torneio.h"

// Inicialização do código automático
int Torneio::proxCodigo = 1;

// Construtor do torneio
Torneio::Torneio(string n, string d) {
    codigo = proxCodigo++;
    nome = n;
    dataInicio = d;
}

// Adiciona uma equipa à coleção do torneio
void Torneio::adicionarEquipa(const Equipa& e) {
    if (equipas.size() >= MAX_EQUIPAS) {
        cout << "Nao e possivel adicionar mais de " << MAX_EQUIPAS << " equipas ao torneio." << endl;
        return;
    }

    equipas.insert(e);
}

// Gera a primeira ronda do torneio
void Torneio::gerarPrimeiraRonda() {

    Ronda r;
    Colecao<Equipa>::iterator it = equipas.begin();
    
	//Verificar numero de equipas
    if (equipas.size() % 2 != 0) {
        cout << "Numero de equipas invalido. Deve ser par.\n" << endl;
        return;
    }

    while (true) {

        // Primeira equipa
        if (it == equipas.end())
            break;
        Equipa* e1 = (Equipa*)&(*it);
        it++;

        // Segunda equipa
        if (it == equipas.end())
            break;
        Equipa* e2 = (Equipa*)&(*it);
        it++;

        // Criar partida automaticamente
        Partida p(e1, e2, "17/12/2025 10:00");
        p.registarResultado(1); // resultado automático

        r.adicionarPartida(p);
    }

    // Guardar ronda
    rondas.insert(r);

    // Criar automaticamente a ronda seguinte
    gerarRondaSeguinte();
}


void Torneio::gerarRondaSeguinte() {

    // Obter a última ronda
    Colecao<Ronda>::iterator itR = rondas.end();
    itR--;

    Ronda& rondaAnterior = (Ronda&)(*itR);

    // Se a ronda anterior só tem uma partida, é a final
    if (rondaAnterior.getPartidas().size() == 1)
        return;

    Ronda novaRonda;

    Colecao<Partida>::const_iterator itP =
        rondaAnterior.getPartidas().begin();

    while (true) {

        // Primeira vencedora
        if (itP == rondaAnterior.getPartidas().end())
            break;
        Equipa* e1 = itP->getVencedora();
        itP++;

        // Segunda vencedora
        if (itP == rondaAnterior.getPartidas().end())
            break;
        Equipa* e2 = itP->getVencedora();
        itP++;

        Partida p(e1, e2, "17/12/2025 12:00");
        p.registarResultado(1);

        novaRonda.adicionarPartida(p);
    }

    rondas.insert(novaRonda);
}


// Mostra toda a informação do torneio
void Torneio::mostrar() const {

    cout << "Torneio " << codigo << ": "
        << nome << " (" << dataInicio << ")" << endl << endl;

    cout << "Equipas:" << endl;
    Colecao<Equipa>::const_iterator itE;
    for (itE = equipas.begin(); itE != equipas.end(); itE++) {
        itE->mostrar();
        cout << endl;
    }

    cout << "Rondas:" << endl;
    Colecao<Ronda>::const_iterator itR;
    for (itR = rondas.begin(); itR != rondas.end(); itR++)
        itR->mostrar();
}
