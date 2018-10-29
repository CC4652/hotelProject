#ifndef LDDE_H
#define LDDE_H
#include <iostream>
#include <string>
#include "gerenciaInfo.h"

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

    int total = 0;

public:
    No* primeiro;
    LDE(): primeiro(nullptr), total(0){
    }

    bool insere(string nome, int idade, int cpf, string email, string contato, int duracao, int quarto, bool ativo) {
        No *atual = primeiro;
        No *anterior = NULL;

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

        return true;
      }

    void salvaClientes(){
        No *atual = primeiro;
        while(atual->prox ){


            atual = atual->prox;
        }

        QFile file("clientes.txt");
        if((file.open(QIODevice::Append | QIODevice::Text))){
            QTextStream in(&file);
            in << QString::fromStdString(atual->c.nome) << endl;
            in << atual->c.idade << endl;
            in << atual->c.cpf << endl;
            in << QString::fromStdString(atual->c.email) << endl;
            in << QString::fromStdString(atual->c.contato) << endl;
            in << atual->c.duracao << endl;
            in << atual->c.quarto << endl;
            in << atual->c.ativo << endl;
        }

    }

    void imprime() {
       No *atual = primeiro;
       while (atual) {
         cout << atual->c.nome << endl;
         cout << atual->c.quarto << endl;
         atual = atual->prox;
        }
    }

    void carregaLDE(){
        QString filename="clientes.txt";
            QFile file(filename);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
                QTextStream stream(&file);
                while (!stream.atEnd()){
                    QString nome = stream.readLine();
                    QString idade = stream.readLine();
                    QString cpf = stream.readLine();
                    QString email = stream.readLine();
                    QString contato = stream.readLine();
                    QString duracao = stream.readLine();
                    QString quarto = stream.readLine();
                    QString ativo = stream.readLine();
                    insere(nome.toStdString(),idade.toInt(),cpf.toInt(), email.toStdString(), contato.toStdString(), duracao.toInt(),quarto.toInt(), ativo.toInt());
                }
            }
          file.close();
       }
};


#endif // LDDE_H
