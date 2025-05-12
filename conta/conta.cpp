#include "conta.h"

//para o cout
#include <iostream>
using namespace std;

//construtor
ContaBancaria::ContaBancaria(int numero_inserido, Cliente cliente_inserido, double saldo_inserido){
    numero = numero_inserido;
    titular = cliente_inserido;
    saldo = saldo_inserido;
};

//getter
int ContaBancaria::getNumero(){
    return this->numero;
}
void ContaBancaria::depositar(double valor){
    saldo = saldo + valor;
};

void ContaBancaria::sacar(double valor){
    int saldo_restante = saldo-valor;

    //verificar se existe saldo para sacar
    if(saldo_restante<0){
        cout << "Saldo insuficiente para sacar!";
    }
    else{
        saldo = saldo - valor;
    }
};
void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    int saldo_restante = saldo-valor;
    if(saldo_restante<0){
        cout << "Saldo insuficiente para transferencia!";
    }
    else{
        saldo = saldo - valor;
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.getNumero() << endl;
    }
};

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    int saldo_restante = saldo-valor;
    if(saldo_restante<0){
        cout << "Saldo insuficiente para transferencia!";
    }
    else{
        saldo = saldo - valor;
        destino1.depositar(valor/2);
        destino2.depositar(valor/2);
        cout << "Transferido: R$ " << valor/2 << " para cada conta (" << destino1.getNumero() << " e " << destino2.getNumero() << ") da conta " << numero << endl;
    }
};

void ContaBancaria::exibirSaldo(){
    cout<< "Saldo atual da conta "<< numero << ": R$ " << saldo << endl;
};

void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCPF() << endl;
    cout << "Numero da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
};

