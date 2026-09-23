#include <bits/stdc++.h>

using namespace std;

class Invoice {
    public:
        int cod, qnt;
        string desc;
        double price;
        Invoice(int n, string d, int q, double p): cod(n), desc(d), qnt(q), price(p) {}; 

        float getTotal(){
            return qnt*price;
        }
};