#include <bits/stdc++.h>

using namespace std;

class Funcionario {
    public:
        string nome;
        string sobrenome;
        double sal;
        Funcionario(){
            sal = 0;
        }

        float getSalarioAnual(){
            return 12*sal;
        }
};
