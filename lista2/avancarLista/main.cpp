#include <bits/stdc++.h>
#include "data.h"

using namespace std;

int main(){
    int d,m,a;
    int qnt;

    cin >> d >> m >> a;
    Data meudia(d,m,a);

    if(meudia.getDia() != d){
        cout << "Atributo dia Inválido"<< endl;
    }
    if(meudia.getMes() != m){
        cout << "Atributo mês Inválido"<< endl;
    }
    
    cin >> qnt;
    for(int i =0; i < qnt; i++){
        meudia.avancarDia();
    }

    printf("%02d/", meudia.getDia());
    printf("%02d/", meudia.getMes());
    cout << meudia.getAno() << endl;

    return 0;
}