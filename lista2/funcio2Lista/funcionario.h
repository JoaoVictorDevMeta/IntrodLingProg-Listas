#include <bits/stdc++.h>

using namespace std;

class Funcionario {
    private:
        string nome, sobrenome;
        float salario;
    public:
        Funcionario(string n, string s, float d){
            nome = n;
            sobrenome = s;
            salario = (d < 0.0) ? 0.0 : d;
        }

        void setNome(string n){
            nome = n;
        }

        void setSobrenome(string s){
            sobrenome = s;
        }

        void setSalario(float d){
            salario = (d < 0.0) ? 0.0 : d; 
        }

        string getNome(){
            return nome;
        }

        string getSobrenome(){
            return sobrenome;
        }

        float getSalario(){
            return salario;
        }

        float getSalarioAnual(){
            return salario*12;
        }

        void aumentaSalario( float percent){
            salario += salario*percent;
        }
};