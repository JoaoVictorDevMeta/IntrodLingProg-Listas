#include <bits/stdc++.h>

using namespace std;

int maior(int a, int b, int c){
    int maior = -10000000;
    if(maior < a) maior = a;
    if(maior < b) maior = b;
    if(maior < c) maior = c;

    return maior;
}

int main(){
    int x,y,z;

    cin >> x >> y >> z;

    cout << "Maior número: " << maior(x,y,z) << endl;
}