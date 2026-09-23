#pragma once
#include <bits/stdc++.h>

using namespace std;

class Despesa{
    private:
        string nome;
        float valor;
        string tipo;
    public:
        Despesa(){
            valor = 0;
        }

        void setNome(string n){
            nome = n;
        }

        void setValor(float v){
            valor = v;
        }

        void setTipo(string t){
            tipo = t;
        }

        string getNome(){
            return nome;
        }

        float getValor(){
            return valor;
        }

        string getTipo(){
            return tipo;
        }
};