#include <bits/stdc++.h>

using namespace std;

class Data {
    private:
        int dia,mes,ano;
    public:
        Data(){
            dia = mes = ano = 1;
        }

        string getMesString(int mes){
            string meses[13] = {
                "s","Janeiro", "Fevereiro", "Março", "Abril",
                "Maio", "Junho", "Julho", "Agosto",
                "Setembro", "Outubro", "Novembro", "Dezembro"
            };

            if(mes <= 12 && mes >= 1){
                return meses[mes];
            }else{
                return "Indefinido";
            }
        }

        void setDia(int d){
            dia = d;
        }
        void setMes(int m){
            mes = m;
        }
        void setAno(int a){
            ano = a;
        }
        void printData(){
            cout << dia << " de " << getMesString(mes) << " de " << ano;
        }
};