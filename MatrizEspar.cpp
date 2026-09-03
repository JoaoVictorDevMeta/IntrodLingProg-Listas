#include <bits/stdc++.h>

using namespace std;

int main(){
    double x,y, mt;
    int cont=0;

    cin >> x;
    cin >> y;

    for(int i = 0; i < x*y; i++){
        cin >> mt;
        if(mt == 0){
            cont++;
        }
    }

    //cout << cont << " " << ((x*y)/10)*7 << endl;

    if((((x*y)/10)*7) >= cont){
        cout << "A matriz não é esparsa" << endl;
    }else {
        cout << "A matriz é esparsa" << endl;
    }

    return 0;
}