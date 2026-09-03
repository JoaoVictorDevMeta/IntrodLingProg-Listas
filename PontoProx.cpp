#include <bits/stdc++.h>

using namespace std;

struct Ponto {
    double x, y;
};

double CalcDis(double x1, double y1, double x2, double y2){
    double dis = sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
    return dis;
};

int main(){
    double pX, pY, dis, last = 100000;
    int n;
    Ponto pIni;
    Ponto pProx;

    cin >> pIni.x >> pIni.y;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> pX >> pY;
        dis = CalcDis(pIni.x, pIni.y, pX, pY);
        //cout << dis << " DISTANCIA" << endl;
        if(dis < last){
            pProx.x = pX;
            pProx.y = pY;
            last = dis;
        }
    }

    cout << "Ponto mais perto é (" << pProx.x << ", " << pProx.y << ")" << endl;

    return 0;
}
