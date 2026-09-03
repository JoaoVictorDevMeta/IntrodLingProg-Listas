#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, countI =0, countT=0;


    while(true){
        cin >> n;
        if(n==0){
            break;
        }

        if(n > 15 && n%2!=0){
            countI++;
        }
        countT++;
    }
    
    int percent = (100 / countT) * countI;
    
    cout << percent << "%" << endl;

    return 0;
}