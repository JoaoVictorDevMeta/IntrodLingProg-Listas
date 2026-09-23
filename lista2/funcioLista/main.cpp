#include <bits/stdc++.h>
#include "funcionario.h"

using namespace std;

int main(){
    int n;
    
    cin>> n;
    Funcionario pessoas[n];

    for(int i =0; i <n; i++){
        cin >> pessoas[i].nome 
        >> pessoas[i].sobrenome >> pessoas[i].sal;
    }

    for(int i =0; i<n;i++){
        cout << pessoas[i].nome <<" "<< pessoas[i].sobrenome << " - "
            << pessoas[i].sal << " - " << pessoas[i].getSalarioAnual() << endl;
    }
}