#include <bits/stdc++.h>

using namespace std;

void SomaExibMat(int m, int n, vector<vector<int>> mat1, vector<vector<int>> mat2){

    for(int i = 0; i < m; i++){
        for(int j =0;j < n ; j++){
            cout << mat1[i][j]+mat2[i][j] << " ";
        }
        cout << endl;
    }

    return;
}

int main(){
    int m,n;

    cin >> m >> n;

    vector<vector<int>> matz(m, vector<int>(n));
    vector<vector<int>> matzsecond(m, vector<int>(n));

    //cout << m << " " << n << endl;

    for(int i = 0; i < m; i++){
        for(int j =0;j < n ; j++){
            cin >> matz[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j =0;j < n ; j++){
            cin >> matzsecond[i][j];
        }
    }

    SomaExibMat(m , n, matz, matzsecond);

    return 0;
}