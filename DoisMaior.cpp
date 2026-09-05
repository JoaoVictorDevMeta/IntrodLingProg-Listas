#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, maio1=-1000000,maio2=-1000000;

    while(true){
        cin >> t;
        if(t == 0){
            break;
        }

        if(t > maio1){
            maio2 = maio1;
            maio1 = t;
        } else if(t > maio2){
            maio2 = t;
        }

    }

    cout << "Maior: " << maio1<< endl;
    cout << "Segundo maior: " << maio2 << endl;
    
    return 0;
}