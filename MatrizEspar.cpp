#include <bits/stdc++.h>

using namespace std;

bool EspaMat(double mtz[10][10], int m, int n){
    int cont = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(mtz[i][j] == 0){
                cont++;
            }
        }
    }

    if(cont > (m * n * 0.7)){
        return true;
    }

    return false;
}

int main(){
    int x, y; 
    double mtz[10][10];

    cin >> x >> y;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> mtz[i][j];
        }
    }

    if(EspaMat(mtz, x, y)){
        cout << "A matriz é esparsa" << endl;
    } else {
        cout << "A matriz não é esparsa" << endl;
    }

    return 0;
}