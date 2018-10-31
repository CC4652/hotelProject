#ifndef LDDE_H
#define LDDE_H
#include <iostream>
#include <string>
#include "gerenciaInfo.h"
#include "les.h"
#define MAX 30

class No {
private:
public:
  typedef struct{
    string nome;
    int idade;
    int cpf;
    string endereco;
    string email;
    string contato;
    int duracao;
    int quarto;
    bool ativo;
    int tipo;
  }Cliente;

  Cliente c;

  No *prox;

  No(string nome, int idade, int cpf, string endereco, string email, string contato, int duracao, int quarto, bool ativo, int tipo) {
    this->c.nome = nome;
    this->c.idade = idade;
    this->c.cpf = cpf;
    this->c.endereco = endereco;
    this->c.email = email;
    this->c.contato = contato;
    this->c.duracao = duracao;
    this->c.quarto = quarto;
    this->c.ativo = ativo;
    this->c.tipo = tipo;
    this->prox = NULL;
  }
};

class LDE {
private:

    int total = 0;

public:
    No* primeiro;
    LES g;

    LDE(): primeiro(nullptr), total(0){
    }

    bool insere(string nome, int idade, int cpf, string endereco, string email, string contato, int duracao, int quarto, bool ativo,int tipo) {
        No *atual = primeiro;
        No *anterior = NULL;

        No *novo = new No(nome, idade, cpf, endereco, email, contato, duracao, quarto, ativo,tipo);

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

        g.getQuarto(quarto);

        return true;
      }

    void salvaClientes(){
        No *atual = primeiro;

        while(atual->prox ){
            atual = atual->prox;
        }



        QFile file("clientes");
        if((file.open(QIODevice::Append | QIODevice::Text))){
            QTextStream in(&file);
                in << QString::fromStdString(atual->c.nome) << endl;
            }


        QString cliente = QString::fromStdString(atual->c.nome);

        QFile filee(cliente);
        if((filee.open(QIODevice::ReadWrite | QIODevice::Text))){
            QTextStream in(&filee);
            in << QString::fromStdString(atual->c.nome) << endl;
            in << atual->c.idade << endl;
            in << atual->c.cpf << endl;
            in << QString::fromStdString(atual->c.endereco) << endl;
            in << QString::fromStdString(atual->c.email) << endl;
            in << QString::fromStdString(atual->c.contato) << endl;
            in << atual->c.duracao << endl;
            in << atual->c.quarto << endl;
            in << atual->c.ativo << endl;
            in << atual->c.tipo << endl;
        }
        file.close();
        filee.close();
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
        QString filename="clientes";
            QFile file(filename);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
                QTextStream stream(&file);
                while (!stream.atEnd()){
                    QString cliente = stream.readLine();
                    QString filename=cliente;
                        QFile filee(filename);
                        if (filee.open(QIODevice::ReadOnly | QIODevice::Text)){
                            QTextStream stream(&filee);
                            while (!stream.atEnd()){
                                QString nome = stream.readLine();
                                QString idade = stream.readLine();
                                QString cpf = stream.readLine();
                                QString endereco = stream.readLine();
                                QString email = stream.readLine();
                                QString contato = stream.readLine();
                                QString duracao = stream.readLine();
                                QString quarto = stream.readLine();
                                QString ativo = stream.readLine();
                                QString tipo = stream.readLine();
                                insere(nome.toStdString(),idade.toInt(),cpf.toInt(), endereco.toStdString(),email.toStdString(), contato.toStdString(), duracao.toInt(),quarto.toInt(), ativo.toInt(), tipo.toInt());
                            }
                         }
                 }
            }
          file.close();
       }

    void alteraCliente(string nome){
        int quarto;
        No *atual = primeiro;
        while (atual) {
            if(nome == atual->c.nome){
                atual->c.ativo = false;
                quarto = atual->c.quarto;
            }
          atual = atual->prox;
         }

        g.setQuartos(quarto);

        salvaClientes();
    }
};


#endif // LDDE_H
