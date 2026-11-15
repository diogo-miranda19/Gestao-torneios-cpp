# Sistema de Gestão de Torneios - Programação Orientada a Objetos (C++)

> Projeto académico desenvolvido no âmbito da unidade curricular de **Programação Orientada a Objetos (POO)** em duplas da Licenciatura em Engenharia Informática no **UPB (Universidade Politécnica de Bragança)**.

---

## Sobre o Projeto
Esta aplicação de consola, desenvolvida em **C++** no **Visual Studio Community**, simula a gestão de um torneio. O principal objetivo do projeto é aplicar os conceitos fundamentais da Programação Orientada a Objetos — encapsulamento, composição de classes, apontadores/referências e coleções genéricas — através da modelação das entidades de um torneio e da progressão automática das rondas.

*(Nota: O ficheiro de cabeçalho `Colecao.h` foi fornecido pelos docentes da unidade curricular como estrutura base para a gestão dinâmica de coleções, encapsulando um `std::set<K>` da STL do C++).*

---

## Arquitetura e Classes Implementadas

O projeto está organizado de forma modular em header files (`.h`) e de implementação (`.cpp`):

- **`Jogador` (`Jogador.h` / `Jogador.cpp`)**: Representa um jogador individual, encapsulando o seu identificador, nome e *nickname*.
- **`Equipa` (`Equipa.h` / `Equipa.cpp`)**: Modela uma equipa composta por vários jogadores, gerindo a sua constituição e dados associados.
- **`Partida` (`Partida.h` / `Partida.cpp`)**: Representa um encontro entre duas equipas numa determinada data/hora, registando o resultado e a equipa vencedora.
- **`Ronda` (`Ronda.h` / `Ronda.cpp`)**: Organiza o conjunto de partidas disputadas em cada fase ou eliminatória do torneio.
- **`Torneio` (`Torneio.h` / `Torneio.cpp`)**: Classe principal de gestão que coordena as equipas inscritas, a geração automática das rondas e a exibição dos resultados.
- **`Colecao.h`**: Coleção genérica (*template*) fornecida pelos docentes (baseada em `std::set`) para armazenar, procurar e gerir elementos sem duplicados.
- **`main.cpp`**: *Entry point* da aplicação, onde são instanciados o torneio, as equipas e os jogadores, simulando a geração das rondas e apresentando o resumo na consola.

---

## Como Executar o Projeto

### Pré-requisitos
- **Visual Studio Community** (2022 ou superior) com a carga de trabalho **Desenvolvimento para desktop com C++** instalada.

### Passos para Executar:
1. Clona ou descarrega este repositório.
2. Abre o ficheiro de solução **`trabPOO.slnx`** no **Visual Studio Community**.
3. Define a configuração de compilação para **Debug** ou **Release** (`x64`).
4. Prime **`Ctrl + F5`** (ou vai a **Depurar** > **Iniciar Sem Depurar**) para compilar e executar o programa.

---

## Estrutura de Pastas
```text
trabPOO/
├── trabPOO/
│   ├── Colecao.h          # Coleção genérica fornecida pelos docentes
│   ├── Equipa.h / .cpp    # Definição e implementação da classe Equipa
│   ├── Jogador.h / .cpp   # Definição e implementação da classe Jogador
│   ├── Partida.h / .cpp   # Definição e implementação da classe Partida
│   ├── Ronda.h / .cpp     # Definição e implementação da classe Ronda
│   ├── Torneio.h / .cpp   # Classe principal de gestão do torneio
│   ├── main.cpp           # Entry point e simulação do programa
│   └── POO_Trab.vcxproj   
├── trabPOO.slnx           
├── .gitignore             
└── README.md              
```

---

## Conclusões e Aprendizagens
- **Modelação Orientada a Objetos:** Separação clara de responsabilidades entre entidades (`Torneio`, `Ronda`, `Partida`, `Equipa`, `Jogador`) utilizando interfaces `.h` e implementações `.cpp`.
- **Utilização de Templates e STL:** Integração de coleções genéricas (`Colecao<K>` baseada em `std::set`) para garantir armazenamento ordenado e sem elementos duplicados.
- **Gestão de Referências e Memória:** Trabalho prático com passagem de objetos e apontadores em C++.
