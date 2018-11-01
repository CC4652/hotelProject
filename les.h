#ifndef LES_H
#define LES_H
#define MAX 30
#include <iostream>
#include <string>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QMessageBox>

// LES, responsável pela gerência de quartos e disponibilidade deles no programa

using namespace std;

class LES {
  private:
    typedef struct{
        bool disp;
        int num;
    }Quarto;
public:
    Quarto q[MAX];

    LES(){
        for(int i= 0; i < MAX; i ++){
            q[i].num = i + 1;
            q[i].disp = true;
        }
        salvaQuartos();
    }

    void carregaLES(){
        int i = 0;
        QString filename="quartos.txt";
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&file);
            while (!stream.atEnd()){
                QString num = stream.readLine();
                QString disp = stream.readLine();
                q[i].num = num.toInt();
                q[i].disp = disp.toInt();
                i++;
            }
        }
      file.close();
   }


    void salvaQuartos(){
    QFile file("quartos.txt");
    if((file.open(QIODevice::ReadWrite | QIODevice::Text))){
        for(int i= 0; i < MAX; i ++){
            QTextStream in(&file);
            in << q[i].num << endl;
            in << q[i].disp << endl;
        }
    }
    }

    void getQuarto(int quarto){
        for(int i= 0; i < MAX; i ++){
            if(quarto == q[i].num){
                q[i].disp = false;
            }
        }

        salvaQuartos();
        }

    void setQuartos(int quarto){
        for(int i= 0; i < MAX; i ++){
             if(quarto == q[i].num){
                q[i].disp = true;
            }
        }
        salvaQuartos();
    }


    int imprimeInt(int i){
        return q[i].num;
    }

    bool imprimeDisp(int i){
        return q[i].disp;
    }
};

#endif // LES_H
