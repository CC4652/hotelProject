#ifndef VERIFICAUSER_H
#define VERIFICAUSER_H
#include <string>
#include <stdio.h>
#include<iostream>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QMessageBox>

using namespace std;
class gerenciaInfo{
public:
    QString senhaUser;
    bool verificaSenha(){
        QFile file("senha.txt");
        if(!(file.open(QIODevice::ReadOnly | QIODevice::Text))){
            QMessageBox msgBox;
            msgBox.setText("Nenhuma senha encontrada.");
            msgBox.exec();
            return false;
        }
        else{
            QTextStream stream(&file);
            QString senha = stream.readLine();
            cout << senha.toStdString() << endl;
            senhaUser = senha;
        }

        file.close();

        return true;
    }


    void salvaSenha(QString senha){
        QFile file("senha.txt");
        if((file.open(QIODevice::ReadWrite | QIODevice::Text))){
            QTextStream in(&file);
            in << senha << endl;
        }
    }

    bool verificaUsuario(QString loginUser, QString senhaUser){
        QString filename="funcionarios.txt";
            QFile file(filename);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
                QTextStream stream(&file);
                while (!stream.atEnd()){
                    QString nome = stream.readLine();
                    QString login = stream.readLine();
                    QString senha = stream.readLine();
                    QString cargo = stream.readLine();
                    QString registro = stream.readLine();
                    if(loginUser == login && senhaUser == senha){
                        return true;
                    }
                }
            }
          file.close();
        return  false;
    }

    void salvasenha(){

    }

    void cadastraFunc(QString nome, QString user, QString senha, QString cargo, QString registro){
        ofstream fout("funcionarios.txt", ios::app);

        fout << nome.toStdString() << endl;
        fout << user.toStdString() << endl;
        fout << senha.toStdString() << endl;
        fout << cargo.toStdString() << endl;
        fout << registro.toStdString() << endl;
        fout << "\n";

        ifstream fin("funcionarios.txt");
            char temp;
            QString buffer;
            while (fin.get(temp)) {
                buffer.push_back(QChar(temp));

            }

            fin.close();
    }

};

#endif // VERIFICAUSER_H
