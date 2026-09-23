#include <bits/stdc++.h>

using namespace std;

class Data {
    private:
        int dia;
        int mes;
        int ano;

        int mesesdias[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    public:
        Data(int d, int m, int a){
            mes = (m < 1 || m > 12) ? 1 : m;
            dia = (d < 1 || d > mesesdias[m]) ? 1 : d;
            ano = a;
        }

        void setDia(int d){
            dia = (d < 1 || d > mesesdias[mes]) ? 1 : d;
        }

        void setMes(int m){
            mes = (m < 1 || m > 12) ? 1 : m;
        }

        void setAno(int a){
            ano = a;
        }

        int getDia(){
            return dia;
        }
        
        int getMes(){
            return mes;
        }

        int getAno(){
            return ano;
        }

        void avancarDia(){
            if(dia+1 > mesesdias[mes]){
                dia = 1;
                if(mes+1 > 12){
                    ano++;
                    mes = 1;
                }else {
                    mes++;
                }
            }else {
                dia++;
            }
        }
};