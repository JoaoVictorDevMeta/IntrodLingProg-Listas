#include <bits/stdc++.h>
#include "pessoa.h"

using namespace std;

int main(){
    int n;
    int c;
    string nm, tel, subs;
    int id;
    cin >> n;
    cin.ignore();

    Pessoa pers[n];

    for(int i =0;i<n;i++){
        //cin.ignore();
        getline(cin, nm);
        cin >> id;
        cin.ignore();
        getline(cin, tel);
        
        pers[i].setNome(nm);
        pers[i].setIdade(id);
        pers[i].setTelefone(tel);
    }

    cin >> subs;
    
    for(int i =0;i<n;i++){
        size_t pos = pers[i].getNome().find(subs);
        if(pos != string::npos){
            c++;
            cout << pers[i].getNome() << ", " << pers[i].getIdade() 
            << ", " << pers[i].getTelefone() << endl;
        }
    }

    if(c == 0){
        cout << "Pessoa não encontrada" << endl;
    }

    return 0;
}