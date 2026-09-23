#include <bits/stdc++.h>

using namespace std;

class Produto {
    private:
        string nome;
        float preco;
        static int quantProdutos;
    public:
        Produto(string n, float p){
            nome = n;
            preco = p;
            quantProdutos++;
        };

        ~Produto(){
            quantProdutos--;
        };

        void setNome(string m){
            nome = m;
        }

        void setPreco(float p){
            preco = p;
        }

        string getNome(){
            return nome;
        }

        float getPreco(){
            return preco;
        }

        void exibir(){
            cout << "Produto: " << nome << " - Preço: " << preco << endl;
        }

        static int getQuantProdutos(){
            return quantProdutos;
        }
};

int Produto::quantProdutos = 0;