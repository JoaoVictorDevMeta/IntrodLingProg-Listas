#include <bits/stdc++.h>
#include "produto.h"

using namespace std;

int main(){
    string nome;
    float preco;
    Produto* produtos[4];

    for(int i =0; i < 4; i++){
        cin >> nome >> preco;
        produtos[i] = new Produto(nome, preco);
    }

    for(int i =0; i < 4; i++){
        produtos[i]->exibir();
    }
    cout << "Quantidade total de produtos: " << Produto::getQuantProdutos() << endl;
    
    for (int i = 0; i < 4; i++) {
        delete produtos[i]; 
    }

    cout << "Quantidade total de produtos: " << Produto::getQuantProdutos() << endl;

    return 0;
}