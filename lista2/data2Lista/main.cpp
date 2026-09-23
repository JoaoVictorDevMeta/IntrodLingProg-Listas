#include <bits/stdc++.h>
#include "data.h"

using namespace std;

int main(){
    Data pp;
    int d,m,a;
    cin >> d >> m >> a;
    pp.setDia(d);
    pp.setMes(m);
    pp.setAno(a);

    pp.printData();
}