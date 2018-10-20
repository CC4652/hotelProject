#ifndef LES_H
#define LES_H
#define MAX 30
#include <iostream>
#include <string>

using namespace std;


class LES {
  private:
    typedef struct{
        bool disp;
        int num;
    }Quarto;

    Quarto q[MAX];

public:
    LES(){
        //cout << "Na LES: ";
        for(int i= 0; i < MAX; i ++){
            //cout << i << " ";
            q[i].num = i + 1;
            q[i].disp = false;
        }
    }

    int imprimeInt(int i){
       /* for(int i = 0; i < MAX; i ++){
            cout << "Quartos: " << q[i].num << endl;
            cout << "Disponibilidade: " << q[i].disp << endl;
        }*/
        return q[i].num;
    }

    bool imprimeDisp(int i){
         return q[i].disp;
         /*cout << q[i].num << endl;
         cout << q[i].disp << endl;
         cout << "\n" << endl;*/
    }
};



#endif // LES_H