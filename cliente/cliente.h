#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;


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
    string getNome();
    string getCPF();
};

#endif