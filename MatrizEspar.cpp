#include <bits/stdc++.h>

using namespace std;

bool EspaMat(double mtz[10][10],int m, int n){
    int cont=0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j <10; j++){
            if(mtz[i][j] == 0){
                cont++;
            }
        }
    }

    if((m*n*0.7) < cont){
        return false;
    }

    return true;
}

int main(){
    double x,y;
    double mtz[10][10];

    cin >> x;
    cin >> y;

    for(int i = 0; i < x; i++){
        for(int j=0; j < y; j++){
            cin >> mtz[i][j];
        }
    }

    if(EspaMat(mtz, x,y)){
        cout << "A matriz não é esparsa" << endl;
    }else {
        cout << "A matriz é esparsa" << endl;
    }

    return 0;
}