#ifndef NO_H
#define NO_H

#include <iostream>
#include <stdlib.h>
//#include <string>

using namespace std;

class No{
public:
    typedef struct Cliente{
        char nome[50];
        int idade;
        int cpf;
        char email[50];
        char contato[50];
        int duracao;
        int quarto;
        bool ativo;
        No *prox;
    }Cliente;

    Cliente c;


};

#endif // NO_H
