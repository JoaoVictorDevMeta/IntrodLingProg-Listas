#include <bits/stdc++.h>

using namespace std;

struct Ponto {
    double x, y;
};

double CalcDis(Ponto p1, Ponto p2){
    double dis = sqrt( ((p2.x-p1.x)*(p2.x-p1.x)) + ((p2.y-p1.y)*(p2.y-p1.y)) );
    return dis*dis;
};


int main(){
    Ponto p1,p2;

    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;

    double quadDis = CalcDis(p1,p2);

    cout << fixed << setprecision(0) << quadDis << endl;
}