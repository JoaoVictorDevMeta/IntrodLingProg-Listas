#include <bits/stdc++.h>

using namespace std;

class ContaBancaria{
    private:
        int numero;
        float saldo;
        static int totalContas;
        static float bancoSaldoTotal;

    public:
        ContaBancaria(int n, float s){
            numero = n;
            saldo = s;
            bancoSaldoTotal+=s;
            totalContas++;
        }

        ~ContaBancaria(){
            totalContas--;
            bancoSaldoTotal-= saldo;
        }

        static int getTotalContas(){
            return totalContas;
        }

        static float getBancoSaldoTotal(){
            return bancoSaldoTotal;
        }
};

int ContaBancaria::totalContas = 0;
float ContaBancaria::bancoSaldoTotal = 0.0;