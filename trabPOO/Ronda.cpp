#include "Ronda.h"

// Inicialização do código automático
int Ronda::proxCodigo = 1;

// Construtor: atribui código automático à ronda
Ronda::Ronda() {
    codigo = proxCodigo++;
}

// Adiciona uma partida à coleção de partidas da ronda
void Ronda::adicionarPartida(const Partida& p) {
    partidas.insert(p);
}

// Devolve a coleção de partidas da ronda
const Colecao<Partida>& Ronda::getPartidas() const {
    return partidas;
}

// Mostra a informação da ronda e das respetivas partidas
void Ronda::mostrar() const {

    cout << "Ronda " << codigo << endl;

    Colecao<Partida>::const_iterator it;
    for (it = partidas.begin(); it != partidas.end(); it++)
        it->mostrar();
}

// Critério de ordenação das rondas por código
bool Ronda::operator<(const Ronda& r) const {
    return codigo < r.codigo;
}
