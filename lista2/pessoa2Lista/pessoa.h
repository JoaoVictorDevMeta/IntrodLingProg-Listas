#include <bits/stdc++.h>

using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        string telefone;
    public:
        Pessoa(){
            idade = 0;
        }
        Pessoa(string m): nome(m){};
        Pessoa(string n, int id, string tel): nome(n), idade(id), telefone(tel){}

        void setNome(string m){
            nome = m;
        }

        void setIdade(int id){
            idade = id;
        }

        void setTelefone(string tel){
            telefone = tel;
        }

        string getNome(){
            return nome;
        }

        int getIdade(){
            return idade;
        }

        string getTelefone(){
            return telefone;
        }
};