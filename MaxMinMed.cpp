#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t,min = 10000000, max = -10000000, soma=0;

    cin >> n;

    for (int i =0; i<n;i++){
        cin >> t;
        if(min > t){
            min = t;
        }
        if(max < t){
            max = t;
        }

        soma +=t;
    }

    cout << min << " " << max << " " << soma/n << endl;
    return 0;
}