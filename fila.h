#ifndef FILA_H
#define FILA_H
#include <iostream>
#include <string>
#include "gerenciaInfo.h"
#include "les.h"

class Ne
{
public:
  typedef struct{
    string nome;
    int dias;
    int tipoAcomodacao;
    int valor;
  }Fila;

    Fila f;

    Ne* proximo;
    Ne(string nome, int dias, int tipoAcomodacao, int valor){
        this->f.nome = nome;
        this->f.dias = dias;
        this->f.tipoAcomodacao = tipoAcomodacao;
        this->f.valor = valor;
    }

    friend class FDE;
};

class FDE {
private:


public:

    Ne *primeiro;
    Ne *ultimo;
    int tam;
  FDE() : primeiro(nullptr), ultimo(nullptr), tam(0){
  }

  bool enfileira(string nome, int dias, int tipoAcomodacao) {
      int valor = (settaAcomodacao(tipoAcomodacao) * dias);
      Ne* novo = new Ne(nome, dias, tipoAcomodacao, valor);
      if(!novo)
          return false;

      if(ultimo)
          ultimo->proximo = novo;

      ultimo=novo;
      if(!primeiro)
          primeiro=novo;

      return true;
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

  bool desenfileira() {
        if(!primeiro)
            return false;

        int saida = primeiro->f.valor;
        cout << saida << endl;
        primeiro = primeiro->proximo;
        return true;
  }

  bool vazia() {
    return primeiro == nullptr;
  }


};


#endif /* FILA_H */
