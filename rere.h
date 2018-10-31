#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

// lógica de faturamento

class No{
  private:
  public:
    typedef struct{
      string nome;
      int dias;
      int tipoAcomodacao;
      int valor;
    }Fila;

  Fila f;

  No(string nome, int dias, int tipoAcomodacao, int valor){
    this->f.nome = nome;
    this->f.dias = dias;
    this->f.tipoAcomodacao = tipoAcomodacao;
      this->f.valor = valor;
  }
};

// lógica da estrutura

class FILA{
 private:

    int sz;
    No *buff;
    int i;
    int f;

public:

    FILA(int sz) : sz(sz), buff(new No[sz]), i(0), f(0){};

    bool enfileira(string nome, int novo) {
        if (cheia())
            return false;


        pessoa p;
        p.nome = nome;
        p.valor = novo;


    buff[f] = p;
    f = (f + 1) % sz;
    return true;
  }

  bool desenfileira(int &saida) {
    if (vazia())
      return false;
    saida = buff[i];
    i = (i + 1) % sz;

    return true;
  }

  int calculaDiaria(){
    int x = f->dias * settaAcomodacao(f->tipoAcomodacao);
    enfileira(f->nome, x);


  }

  int settaAcomodacao(int tipoAcomodacao){
    if(tipoAcomodacao == 1)
      return 40;
    if(tipoAcomodacao == 2)
      return 60;
    if(tipoAcomodacao == 3)
      return 100;
    if(tipoAcomodacao == 4)
      return 150;
  }


  bool vazia() {
    return i == f;
  }

  bool cheia() {
    return ((f + 1) % sz) == i;
  }

  virtual ~FILA() {
      delete[] buff;
  }

};

#endif // FILA_H
