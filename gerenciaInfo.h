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
    bool verificaSenha(){
/*


        ifstream myReadFile;
        myReadFile.open("text.txt");
        char output[100];
        if (myReadFile.is_open()) {
        while (!myReadFile.eof()) {
            cout<<"TÕ aqui ó" << endl;

           myReadFile >> output;
           cout<<output;


        }
       }
       myReadFile.close();

     QString teste = "Testando a impressão";

        ofstream fout("\\home\\Hotel\\teste.txt", ios::app);

        fout << teste.toStdString() << endl;

        update(true);

*/



      /*
        QString filename = "Data.txt";
            QFile file(filename);
            if (file.open(QIODevice::ReadWrite)) {
                QTextStream stream(&file);
                stream << "something" << endl;
            }*/
/*
        //QTextStream output(stdout);

        QFile myFile("mahmoud.txt");


        if(!myFile.open(QIODevice::WriteOnly)){
            cout << "erro" << endl;
        }

        QTextStream output(&myFile);

            output << "File Has Been Created" << endl;

            output << "Failed to Create File" << endl;


        QTextStream writeToFile(&myFile);

        writeToFile << "Hello World" << endl;

        myFile.close();*/

        QFile file("senha.txt");
        QString line;
        if(!(file.open(QIODevice::ReadOnly | QIODevice::Text))){
            cout << "Nenhuma senha cadastrada" << endl;
            QMessageBox msgBox;
            msgBox.setText("Nenhuma senha encontrada.");
            msgBox.exec();
            return false;
        }




        file.close();

        return true;
       /*
        in << "Senha da gerência: " << endl;
        file.close();
        return true;


         while (!in.atEnd())
           {
              QString line = in.readLine();

           }
           file.close();

      */
    }


    void salvaSenha(QString senha){
        QFile file("senha.txt");
       // QString line;
        if((file.open(QIODevice::ReadWrite | QIODevice::Text))){
            QTextStream in(&file);
            in << senha << endl;
        }
    }

    void update(bool){
        ifstream fin("teste.txt");
            char temp;
            QString buffer;
            while (fin.get(temp)) {
                buffer.push_back(QChar(temp));

            }

            fin.close();

    }

    bool verificaUsuario(){
        return  true;
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
