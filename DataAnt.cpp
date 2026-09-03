#include <bits/stdc++.h>

using namespace std;

struct Data {
    int dia, mes, ano;
};

int DataAntiga(Data d1, Data d2){
    if(d1.ano < d2.ano) {
        return 1;
    } else if(d2.ano < d1.ano){
        return -1;
    } else if(d1.mes < d2.mes){
        return 1;
    } else if(d2.mes < d1.mes){
        return -1;
    } else if(d1.dia < d2.dia) {
        return 1;
    } else if(d2.dia < d1.dia) {
        return -1;
    }

    return 0;
};

int main (){
    Data dat1, dat2;
    int res;
    
    cin >> dat1.dia >> dat1.mes >> dat1.ano;
    cin >> dat2.dia >> dat2.mes >> dat2.ano;

    res = DataAntiga(dat1,dat2);

    if(res == -1){
        cout << "Pessoa 2 é mais velha" << endl;
    }else if (res == 1){
        cout << "Pessoa 1 é mais velha" << endl;
    }else {
        cout << "Pessoas são da mesma idade" << endl;
    }

    return 0;
}