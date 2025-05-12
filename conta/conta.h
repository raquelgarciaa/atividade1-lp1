#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include <string>
//dependencia da classe Cliente
#include "../cliente/cliente.h"

class ContaBancaria {
    private:
    int numero;
    double saldo;
    Cliente titular;

    public:
    //construtor com saldo inserido=0 a fim de tornar opcional
    ContaBancaria(int numero_inserido, Cliente cliente_inserido, double saldo_inserido=0);

    int getNumero();
    void depositar(double valor);

    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);

    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);

    void exibirSaldo();

    void exibirInformacoes();

};

#endif