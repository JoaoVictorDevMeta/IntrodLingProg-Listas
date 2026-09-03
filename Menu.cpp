#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    while(true){
        cout << "1 - Item 1" << endl;
        cout << "2 - Item 2" << endl;
        cout << "3 - Item 3" << endl;
        cout << "4 - Sair" << endl;

        cin >> n;

        if(n == 1) {
            cout << "Item 1" << endl;
        } else if(n == 2){
            cout << "Item 2" << endl;
        } else if(n == 3){
            cout << "Item 3" << endl;
        } else if(n == 4){
            cout << "Sair" << endl;
            break;
        }else {
            cout << "Opcao " << n << " Invalida" << endl;
        }
    }

    return 0;
}
