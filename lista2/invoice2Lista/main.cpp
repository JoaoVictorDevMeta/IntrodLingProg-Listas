#include <bits/stdc++.h>
#include "invoice.h"

using namespace std;

int main(){
    int n,q;
    string d;
    float p;

    cin >> n;
    cin.ignore();
    getline(cin, d);
    cin >> q >> p;

    Invoice pod1(n,d,q,p);

    cin >> n;
    cin.ignore();
    getline(cin, d);
    cin >> q >> p;

    Invoice pod2(n,d,q,p);
    
    pod1.print();
    pod2.print();

    return 0;
}