#include <stdio.h>

struct Pessoa {
    // attributes
    private:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];

    // methods
    public:
    Pessoa(int diaNa, int mesNa, int anoNa, char* nome="");

    void Calcula_Idade(int diaAt, int mesAt, int anoAt);

    int informaIdade();
};
