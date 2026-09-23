#pragma once
#include <bits/stdc++.h>
#include "despesas.h"

using namespace std;

class ControleDeGastos{
    private:
        Despesa despesas[100];
    public:
        void setDespesa(Despesa d, int pos){
            despesas[pos].setNome(d.getNome());
            despesas[pos].setTipo(d.getTipo());
            despesas[pos].setValor(d.getValor());
        }

        Despesa getDespesa(int pos){
            return despesas[pos];
        }

        float calculaTotalDeDespesas(){
            float soma=0;
            for(int i = 0; i < 100; i++){
                soma+=despesas[i].getValor();
            }
            return soma;
        }

        float calculaTotalDeDespesasTipo(string tipo){
            float soma=0;
            for(int i = 0; i < 100; i++){
                if(despesas[i].getTipo() == tipo){
                    soma+=despesas[i].getValor();
                }
            }
            return soma;
        }

        bool existeDespesaDoTipo(string tipo){
            bool flag =false;
            for(int i = 0; i < 10; i++){
                if(despesas[i].getTipo() == tipo){
                    flag = true;
                }
            }
            return flag;
        }
};