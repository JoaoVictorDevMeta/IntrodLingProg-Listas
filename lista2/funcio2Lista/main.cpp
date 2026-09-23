#include <bits/stdc++.h>
#include "funcionario.h"

using namespace std;

int main(){
    int q;
    string n, sn;
    float sal;
    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> n >> sn >> sal;
        Funcionario func(n,sn,sal);
        cout << func.getNome() << " " << func.getSobrenome() << " - " 
        << func.getSalario() << " - "<< func.getSalarioAnual() << endl;
        func.aumentaSalario(0.1);
        cout << func.getSalarioAnual () << endl;
    }

    return 0;
}