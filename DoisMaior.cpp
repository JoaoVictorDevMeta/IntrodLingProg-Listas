#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> numss;
    int t;

    while(true){
        cin >> t;
        if(t == 0){
            break;
        }

        numss.push_back(t);
    }

    sort(numss.begin(), numss.end());

    cout << "Maior: " << numss[numss.size()-1] << endl;
    cout << "Segundo maior: " << numss[numss.size()-2] << endl;

    return 0;
}