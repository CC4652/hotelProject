#ifndef NO_H
#define NO_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class No{
private:
public:
  typedef struct{
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

  No(string nome, int idade, int cpf, string email, string contato, int duracao, int quarto, bool ativo) {
    this->c.nome = nome;
    this->c.idade = idade;
    this->c.cpf = cpf;
    this->c.email = email;
    this->c.contato = contato;
    this->c.duracao = duracao;
    this->c.quarto = quarto;
    this->c.ativo = ativo;
    this->prox = NULL;
  }
};

#endif // NO_H
