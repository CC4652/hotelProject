#ifndef VERIFICAUSER_H
#define VERIFICAUSER_H
#include <string>
#include <stdio.h>
#include<iostream>

using namespace std;
class gerenciaInfo{
public:
    bool verificaSenha(){
        cout<<"oi"<< endl;
        /*FILE* f = fopen("senhaGerencia.bin" , "r");

        fclose(f);*/

        return true;
    }

    bool verificaUsuario(){
        return  false;
    }

};

#endif // VERIFICAUSER_H
