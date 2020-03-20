#include <stdio.h>
#include <string.h>
#include "Pessoa.h"
#include <iostream> 
using std::cout; 
using std::endl;

// Não colocamos o valor default na implementação do método, apenas na assinatura que consta no header da classe
Pessoa::Pessoa(int diaN, int mesN, int anoN, char* nome) {
    diaP = diaN;
    mesP = mesN;
    anoP = anoN;
    strcpy(nomeP, nome);

    // Aqui, aumentamos o encapsulamento dos métodos.
    // Como sabemos que precisamos calcular a idade de cada Pessoa, podemos incluir a chamada desse método
    // dentro do construtor do objeto Pessoa. Isso porque os parâmetros desse método 
    Calcula_Idade(8, 3, 2020);
} 

void Pessoa::Calcula_Idade(int diaAt, int mesAt, int anoAt) {
    idadeP = anoAt - anoP;

    if (mesP < mesAt) {
        idadeP = idadeP - 1;
    } else {
        if (mesP == mesAt) {
            if (diaP < diaAt) {
                idadeP = idadeP - 1;
            }
        }
    }

    // COUT
    // No C++ é parte da prática utilizar o cout como comando de print.
    // Para isso, como estamos utilizando o Visual Studio para digitar esses belos códigos,
    // é necessário que importemos a biblioteca iostream. Também devemos especificar que 
    // estamos utilizando o cout e o endl. Enquanto o cout indica o início de uma saída de dados
    // o endl mostra o final.
    // Podemos ter também a utilização de entrada de dados, com o comando cin. Podemos testar essa abordagem
    // em um outro momento.

    // Então, subtituindo o printf("A pessoa %s estaria com %d anos\n", nomeP, idadeP); temos:
    cout <<"A pessoa "<<nomeP<<" teria "<<idadeP<<" anos"<< endl; 
}

int Pessoa::informaIdade() {
    return idadeP;
}

