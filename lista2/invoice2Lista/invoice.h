#include <bits/stdc++.h>

using namespace std;

class Invoice {
    private:
        int cod;
        string desc;
        int qnt;
        float preco;
    public:
        Invoice(int n, string d, int q, float p): cod(n), desc(d){
            qnt = (q < 0) ? 0: q;
            preco = (p < 0.0) ? 0.0 : p;
        }

        void setCodigo(int n){
            cod = n;
        }

        void setDescricao(string d){
            desc = d;
        }

        void setQuantidade(int q){
            qnt = (q < 0) ? 0 : q;
        }

        void setPreco(float p){
            preco = (p < 0.0) ? 0.0 : p;
        }

        int getCodigo(){
            return cod;
        }

        string getDescricao(){
            return desc;
        }

        int getQuantidade(){
            return qnt;
        }

        float getPreco(){
            return preco;
        }

        float getTotal(){
            return qnt * preco;
        }

        void print(){
            cout << cod << " - " << desc << " - " << qnt 
            << " - " << preco << " - " << getTotal() << endl;
        }
};