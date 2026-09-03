#include <bits/stdc++.h>

using namespace std;

int main(){
    int soma = 0;
    double med;
    double vec[10];

    for (int i =0; i < 10; i++){
        cin >> vec[i];
        soma += vec[i];
    }
    med = soma/10.0;
    cout << "Media: " << fixed << setprecision(1) << med << endl;
    cout << "Maiores que a media: ";
    for(int i = 0; i < 10; i++) {
        if(vec[i] > med) {
            cout << fixed << setprecision(0) << vec[i] << " ";
        }
    } 
    cout << endl;

    return 0;
}