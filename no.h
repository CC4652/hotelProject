#ifndef NO_H
#define NO_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class No{
public:
    typedef struct Cliente{
        string nome;
        int idade;
        int cpf;
        string email;
        string contato;
        int duracao;
        int quarto;
        bool ativo;

    }Cliente;

    Cliente c;

    No *prox;

    No() {
        this->prox = nullptr;
      }


};

#endif // NO_H
