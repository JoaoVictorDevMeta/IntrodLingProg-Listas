#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, maior = -100000;

    cin >> n;
    int t;
    for (int i =0; i < n; i++){
        cin >> t;
        if(t > maior){
            maior = t;
        }
    }

    cout << maior << endl;
}