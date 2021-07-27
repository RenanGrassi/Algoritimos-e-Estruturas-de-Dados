#ifndef CONTABANCARIA_LIBRARY_H
#define CONTABANCARIA_LIBRARY_H
#include<stdio.h>

//Struct da conta
typedef struct
{
    int numero;
    double saldo;
}contaBancaria;

//header de funcoes
void Inicializar (contaBancaria *conta, int numero, double saldo);
void Depositar (contaBancaria *conta, double valor);
void Sacar (contaBancaria *conta, double valor);
void saldoConta (contaBancaria *conta);

#endif