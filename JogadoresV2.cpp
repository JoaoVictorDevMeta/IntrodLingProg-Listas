#include <bits/stdc++.h>

using namespace std;

struct Jogador{
    char Nome[50];
    int Idade;
    int Chutes;
    int Gols;
};

int main(){
    Jogador p1,p2;

    cin.getline(p1.Nome, 50);
    cin >> p1.Idade >> p1.Chutes >> p1.Gols;
    cin.ignore();

    cin.getline(p2.Nome, 50);
    cin >> p2.Idade >> p2.Chutes >> p2.Gols;
    cin.ignore();

    if(p1.Gols > p2.Gols){
        cout << p1.Nome << " (" << p1.Idade << ")";
    }else{
        cout << p2.Nome << " (" << p2.Idade << ")";
    }

    return 0;
}