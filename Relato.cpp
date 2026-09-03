#include <bits/stdc++.h>

using namespace std;

struct Movel{
    char descricao[50];
    float peso;
    char tipo;
} tMovel;

int main(){
    int n, countM=0, countReal=0, pesoM=0;
    char pDesc[50];

    cin >> n;
    cin.ignore();

    for(int i =0; i < n; i++){
        cin.getline(tMovel.descricao, 50);

        cin >> tMovel.peso >> tMovel.tipo;
        cin.ignore();

        if(tMovel.peso > pesoM){
            pesoM = tMovel.peso;
            strcpy(pDesc, tMovel.descricao);
        }
        if(tMovel.tipo == 's' && tMovel.peso > 10){
            countM++;
        }
        int tamText = strlen(tMovel.descricao);

        if(strcmp(tMovel.descricao + (tamText - 4), "Real") == 0){
            countReal++;
        }
    }

    cout << "Tipo 's' acima de 10Kg: " << countM << endl;
    cout << "Termina em \"Real\": " << countReal << endl;
    cout << "Mais pesado: \"" << pDesc << "\"" << endl;

    return 0;
}