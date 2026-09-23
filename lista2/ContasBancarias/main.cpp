#include <bits/stdc++.h>
#include "conta.h"

using namespace std;

int main(){
    ContaBancaria* contas[100] = {nullptr};
    int indc;
    while (true) {
        cin >> indc;
        
        if(indc < 0){
            break;
        }

        if(contas[indc] == nullptr){
            int num;
            float sald;
            cin >> num >> sald;
            contas[indc] = new ContaBancaria(num, sald);
        } else {
            delete contas[indc];
            contas[indc] = nullptr;
        }

        cout << "Total de contas ativas: " << ContaBancaria::getTotalContas() << endl;
        cout << "Montante total de saldo: " << ContaBancaria::getBancoSaldoTotal() << endl;
    }

    return 0;
}