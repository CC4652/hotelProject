#ifndef LDDE_H
#define LDDE_H
#include <iostream>
#include <string>
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

class No {
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

class LDE {
private:
    No* primeiro;
    int total = 0;

public:
    LDE(): primeiro(nullptr), total(0){
    }

    bool insere(string nome, int idade, int cpf, string email, string contato, int duracao, int quarto, bool ativo) {
        No *atual = primeiro;
        No *anterior = NULL;

        cout << "Estou aqui" << endl;

        cout << "Agora aqui" << endl;


        cout << "Cheguei aqui" << endl;

        No *novo = new No(nome, idade, cpf, email, contato, duracao, quarto, ativo);

        if (!novo)
          return false;

        while (atual) {
          anterior = atual;
          atual = atual->prox;
        }

        if (anterior)
          anterior->prox = novo;
        else
          primeiro = novo;

        novo->prox = atual;

        cout << "Endereço do primeiro: " << primeiro << endl;

        cout << "Endereço do atual: " << atual << endl;

        cout << "Endereço do anterior: " << anterior << endl;

        cout << "\n" << endl;

        QFile file("clientes.txt");
        if((file.open(QIODevice::Append | QIODevice::Text))){
            QTextStream in(&file);
            in << QString::fromStdString(nome) << endl;
            in << idade << endl;
            in << cpf << endl;
            in << QString::fromStdString(email) << endl;
            in << QString::fromStdString(contato) << endl;
            in << duracao << endl;
            in << quarto << endl;
            in << ativo << endl;
        }

        return true;
      }

    void imprime() {
       No *atual = primeiro;
       while (atual) {
         cout << atual->c.nome << endl;
         atual = atual->prox;
        }
    }


  /*  void insere(No** lista, string nome, int idade, int cpf, string email, string contato, int duracao, int quarto, bool ativo){
        No* novo = (No *)malloc(sizeof(No));

        novo->c.nome = nome;
        novo->c.idade = idade;
        novo->c.cpf = cpf;
        novo->c.email = email;
        novo->c.contato = contato;
        novo->c.duracao = duracao;
        novo->c.quarto = quarto;
        novo->c.ativo = ativo;

        if(*lista == NULL){
            novo->prox = NULL;
          }else{
            novo->prox = *lista;
            primeiro = novo;
          }*/

          //*lista = novo;
/*
        cout << lista << endl;
        cout << novo->c.prox << endl;
        cout << novo->c.ant << endl;*/






/*
    bool insere(string nome, int idade, int cpf, string email, string contato, int duracao, int quarto, bool ativo) {
        No *novo = new No();
        No *ptrAtual = primeiro;
        No *ptrAnterior = nullptr;

        cout << ptrAtual << endl;
        cout << primeiro << endl;

        if(!novo)
            return false;

        novo->c.nome = nome;
        novo->c.idade = idade;
        novo->c.cpf = cpf;
        novo->c.email = email;
        novo->c.contato = contato;
        novo->c.duracao = duracao;
        novo->c.quarto = quarto;
        novo->c.ativo = ativo;

        while(ptrAtual){
            ptrAnterior = ptrAtual;
            ptrAtual = ptrAtual->prox;
            cout << "entrei no while" << endl;
        }

        if(ptrAnterior){
            ptrAnterior->prox = novo;
            cout << "entrei no if" << endl;
        }else{
            primeiro = novo;
            cout << "entrei no else" << endl;
        }

        novo->prox = ptrAtual;
        total++;

        cout << ptrAtual << endl;
        cout << ptrAnterior << endl;
        cout << primeiro << endl;

        return true;

    }
        //novo->prox = nullptr;

        //cout << primeiro << endl;*/

        /*

        while(ptrAtual != nullptr){
              ptrAnterior = ptrAtual;
              ptrAtual = ptrAtual->prox;
        }

        if(ptrAnterior != nullptr)
              ptrAnterior->prox = novo;

         else{
              primeiro = novo;
         }

         novo->prox = ptrAtual;
         total++;*/
/*
         cout << novo->c.nome << endl;
         cout << novo->c.idade << endl;
         cout << novo->c.cpf << endl;
         cout << novo->c.email << endl;
         cout << novo->c.contato << endl;
         cout << novo->c.duracao << endl;
         cout << novo->c.quarto << endl;
         cout << novo->c.ativo << endl;
    }
  

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
