#ifndef REGISTRO_H_INCLUDED
#define REGISTRO_H_INCLUDED

#include<iostream>
#include<stdlib.h>
using namespace std;

int mes_a_numero(string mes){
    int valor=40;
    if(mes=="Jan"){
        return valor;
    }
    else if(mes=="Feb"){
        return valor*2;
    }
    else if(mes=="Mar"){
        return valor*3;
    }
    else if(mes=="Apr"){
        return valor*4;
    }
    else if(mes=="May"){
        return valor*5;
    }
    else if(mes=="Jun"){
        return valor*6;
    }
    else if(mes=="Jul"){
        return valor*7;
    }
    else if(mes=="Aug"){
        return valor*8;
    }
    else if(mes=="Sep"){
        return valor*9;
    }
    else if(mes=="Oct"){
        return valor*10;
    }
    else if(mes=="Nov"){
        return valor*11;
    }
    else if(mes=="Dec"){
        return valor*12;
    }
}

class Registro{
    private:
        string mes;
        int dia;
        string hora;
        string ip;
        string acceso;
        int posicion;
    public:
        Registro (string n_mes,string n_dia,string n_hora,string n_ip,string n_acceso);
        int get_posicion();

};

Registro::Registro(string n_mes,string n_dia,string n_hora,string n_ip,string n_acceso){
    mes=n_mes;
    dia=atoi(n_dia.c_str());
    hora=n_hora;
    ip=n_ip;
    acceso=n_acceso;
    posicion=mes_a_numero(mes)+dia;
}

int Registro::get_posicion(){
    return posicion;
}

#endif // REGISTRO_H_INCLUDED
