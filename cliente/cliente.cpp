#include "cliente.h"

Cliente::Cliente(string nome_inserido, string cpf_inserido){
    nome = nome_inserido;
    cpf = cpf_inserido;
};

Cliente::Cliente(){
    nome="";
    cpf="";
};

//getters
string Cliente::getNome(){
    return this->nome;
};
string Cliente::getCPF(){
    return this->cpf;
};