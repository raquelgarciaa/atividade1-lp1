#include <iostream>
#include <string>

#include "cliente/cliente.h"
#include "conta/conta.h"
using namespace std;

/*
class Cliente {
    private:
    string nome;
    string cpf;

    public:
    //construtor com argumentos
    Cliente(string nome_inserido, string cpf_inserido);
    //construtor padrao
    Cliente();

    //getters
    string getNome(){
        return this->nome;
    }
    string getCPF(){
        return this->cpf;
    }
};
    Cliente::Cliente(string nome_inserido, string cpf_inserido){
        nome = nome_inserido;
        cpf = cpf_inserido;
    };
    Cliente::Cliente(){
        nome="";
        cpf="";
    };

class ContaBancaria {
    private:
    int numero;
    double saldo;
    Cliente titular;

    public:
    //construtor
    ContaBancaria(int numero_inserido, Cliente cliente_inserido, double saldo_inserido);

    int getNumero(){
        return this->numero;
    }
    void depositar(double valor){
        saldo = saldo + valor;
    };

    void sacar(double valor){
        int saldo_restante = saldo-valor;

        //verificar se existe saldo para sacar
        if(saldo_restante<0){
            cout << "Saldo insuficiente para sacar!";
        }
        else{
            saldo = saldo - valor;
        }
    };
    void transferir(double valor, ContaBancaria &destino){
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

    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
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

    void exibirSaldo(){
        cout<< "Saldo atual da conta "<< numero << ": R$ " << saldo << endl;
    };

    void exibirInformacoes(){
        cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCPF() << endl;
        cout << "Numero da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
    }

};
    ContaBancaria::ContaBancaria(int numero_inserido, Cliente cliente_inserido, double saldo_inserido=0){
        numero = numero_inserido;
        titular = cliente_inserido;
        saldo = saldo_inserido;
    };
*/

int main() {
        // Criação dos clientes
        Cliente cliente1("Ana", "111.111.111-11");
        Cliente cliente2("Bruno", "222.222.222-22");
        Cliente cliente3("Carla", "333.333.333-33");
    
        // Criação das contas bancárias com saldos iniciais
        ContaBancaria conta1(1001, cliente1, 1000.0);
        ContaBancaria conta2(1002, cliente2);
        ContaBancaria conta3(1003, cliente3);
    
        // Exibe o saldo inicial da conta de Ana
        conta1.exibirSaldo();
    
        // Ana transfere R$200 para Bruno
        conta1.transferir(200.0, conta2);
    
        // Ana transfere R$300 divididos entre Bruno e Carla
        conta1.transferir(300.0, conta2, conta3);
    
        // Exibição dos saldos finais
        cout << endl;
        conta1.exibirInformacoes();
        conta2.exibirInformacoes();
        conta3.exibirInformacoes();
    return 0;    
}
