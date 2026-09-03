#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n, alt;

    cin >> m >> n;

    int matz[m][n];

    //cout << m << " " << n << endl;

    for(int i = 0; i < m; i++){
        for(int j =0;j < n ; j++){
            cin >> matz[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j =0;j < n ; j++){
            alt = matz[i][j];
            cin >> matz[i][j];
            matz[i][j] += alt;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j =0;j < n ; j++){
            cout << matz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}