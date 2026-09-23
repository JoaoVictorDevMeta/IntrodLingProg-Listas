#include <bits/stdc++.h>

using namespace std;

struct Ponto {
    double x, y;
};

double CalcDis(Ponto p1, Ponto p2){
    double dis = sqrt( ((p2.x-p1.x)*(p2.x-p1.x)) + ((p2.y-p1.y)*(p2.y-p1.y)) );
    return dis;
};

int main(){
    double dis, last = 100000;
    int n;
    Ponto pIni,p2,pProx;

    cin >> pIni.x >> pIni.y;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> p2.x >> p2.y;
        dis = CalcDis(pIni, p2);
        //cout << dis << " DISTANCIA" << endl;
        if(dis < last){
            pProx.x = p2.x;
            pProx.y = p2.y;
            last = dis;
        }
    }

    cout << "Ponto mais perto é (" << pProx.x << ", " << pProx.y << ")" << endl;

    return 0;
}
