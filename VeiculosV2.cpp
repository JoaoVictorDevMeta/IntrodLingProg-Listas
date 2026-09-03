#include <bits/stdc++.h>

using namespace std;

struct Veiculo{
    string Modelo;
    string Marca;
    int AnoFab;
    int Preco;
};

int main(){
    Veiculo car1, car2;
    bool c1;

    cin >> car1.Modelo >> car1.Marca >> car1.AnoFab >> car1.Preco;
    cin >> car2.Modelo >> car2.Marca >> car2.AnoFab >> car2.Preco;

    if(car1.AnoFab < car2.AnoFab){
        c1 = true;
    }else if(car2.AnoFab < car1.AnoFab){
        c1 = false;
    }else if(car1.Preco < car2.Preco) {
        c1 = true;
    }else {
        c1 = false;
    }

    if(c1){
        cout << car1.Marca << " " << car1.Modelo << endl ;
    }else {
        cout << car2.Marca << " " << car2.Modelo << endl ;
    }

    return 0;
}