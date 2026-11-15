#include "Partida.h"

// Construtor: inicializa equipas e data
Partida::Partida(Equipa* a, Equipa* b, string d) {
    e1 = a;
    e2 = b;
    dataHora = d;
    vencedora = 0;
}

// Regista a equipa vencedora da partida
void Partida::registarResultado(int vencedor) {
    if (vencedor == 1)
        vencedora = e1;
    else
        vencedora = e2;
}

// Devolve a equipa vencedora
Equipa* Partida::getVencedora() const {
    return vencedora;
}

// Mostra os dados da partida
void Partida::mostrar() const {
    cout << "Partida (" << dataHora << "): "
        << e1->getCodigo() << " vs " << e2->getCodigo();

    if (vencedora != 0)
        cout << " | Vencedora: Equipa " << vencedora->getCodigo();

    cout << endl;
}

// Critério de ordenação das partidas
bool Partida::operator<(const Partida& p) const {
    if (dataHora != p.dataHora)
        return dataHora < p.dataHora;
	// Ordenar por código das equipas quando a dataHora é igual
    if (e1 && p.e1 && e1->getCodigo() != p.e1->getCodigo())
        return e1->getCodigo() < p.e1->getCodigo();
    if (e2 && p.e2)
        return e2->getCodigo() < p.e2->getCodigo();
    return false;
}
