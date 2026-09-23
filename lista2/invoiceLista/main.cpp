#include <bits/stdc++.h>
#include "invoice.h"

using namespace std;

int main(){
    Invoice produto1(0,"",0,0);
    cin >> produto1.cod;
    cin.ignore();
    getline(cin, produto1.desc);
    cin >> produto1.qnt;
    produto1.qnt = (produto1.qnt < 0) ? 0 : produto1.qnt;
    cin >> produto1.price;
    produto1.price = (produto1.price < 0) ? 0 : produto1.price;

    Invoice produto2(0,"",0,0);
    cin >> produto2.cod;
    cin.ignore();
    getline(cin, produto2.desc);
    cin >> produto2.qnt;
    produto2.qnt = (produto2.qnt < 0) ? 0 : produto2.qnt;
    cin >> produto2.price;
    produto2.price = (produto2.price < 0) ? 0 : produto2.price;

    cout << produto1.cod << " - " << produto1.desc << " - " << produto1.qnt <<
     " - " << produto1.price << " - " << produto1.getTotal() << endl;
    cout << produto2.cod << " - " << produto2.desc << " - " << produto2.qnt <<
     " - " << produto2.price << " - " << produto2.getTotal() << endl;

    return 0;
}