#ifndef LDDE_H
#define LDDE_H
#include <iostream>
#include <string>
#include "no.h"
#include "gerenciaInfo.h"

/*class No {
private:
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
    }Cliente;

    No *prox;

     No() {
  }
};*/

class LDE {
private:
    No* primeiro;
    int total;

public:
    LDE(): primeiro(nullptr), total(0){
    }

    bool insere(char nome[50], int idade, int cpf, char email[50], char contato[50], int duracao, int quarto, bool ativo) {
        No *novo = new No();

        strcpy(novo->c.nome, nome);
        novo->c.idade = idade;
        novo->c.cpf = cpf;
        strcpy(novo->c.email, email);
        strcpy(novo->c.contato, contato);
        novo->c.duracao = duracao;
        novo->c.quarto = quarto;
        novo->c.ativo = ativo;

        novo->c.prox = nullptr;

        No *ptrAnterior = nullptr;
        No *ptrAtual = primeiro;

        while(ptrAtual != nullptr){
              ptrAnterior = ptrAtual;
              ptrAtual = ptrAtual->c.prox;
        }

        if(ptrAnterior != nullptr)
              ptrAnterior->c.prox = novo;

         else{
              primeiro = novo;
         }

         novo->c.prox = ptrAtual;
         total++;
    }
  
      /*
      if (!novo)
        return false;
  
      while (atual && atual->valor < valor) {
        anterior = atual;
        atual = atual->prox;
      }
  
      if (anterior)
        anterior->prox = novo;
      else
        primeiro = novo;
  
      novo->prox = atual;
      return true;
    }*/
    
    /*int Incluir2(int c, char s[200])
    {
        aux = (struct LDE *) malloc(sizeof(struct LDE));
        if(ult==NULL)
        {
            ult = aux;
            ult->prox = NULL;
        }
        else
        {
            aux->prox = prim;
            prim->ant = aux;
        }
        prim = aux;
        prim->c = c;
        strcpy(prim->s,s);
        prim->ant = NULL;
    }*/

   
};


#endif // LDDE_H
