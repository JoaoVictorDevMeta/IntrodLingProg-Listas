#include <bits/stdc++.h>
#include "controle.h"
#include "despesas.h"

using namespace std;

int main(){
    int n;
    string desejado;
    cin >> n;
    ControleDeGastos sistema;

    for(int i =0; i < n; i++){
        string item, tip;
        float val;

        cin.ignore();
        getline(cin, item);
        cin >> val;
        cin >> tip;
        Despesa gasto;
        gasto.setNome(item);
        gasto.setTipo(tip);
        gasto.setValor(val);

        sistema.setDespesa(gasto, i);
    }

    cin >> desejado;
    if(sistema.existeDespesaDoTipo(desejado)){
        for(int i =0; i < 100; i++){
            Despesa atual = sistema.getDespesa(i);
            if(atual.getTipo() == desejado ){
                cout << atual.getNome() << ", R$ " << atual.getValor() << endl;
            }
        }
    }else{
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }

    cout << "Total: " << sistema.calculaTotalDeDespesasTipo(desejado) << "/" 
    << sistema.calculaTotalDeDespesas() << endl;

    return 0;
}
