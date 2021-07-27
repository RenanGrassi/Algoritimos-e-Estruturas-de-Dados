#include "contaBancaria.h"

void Inicializar(contaBancaria *conta, int numero, double saldo)
{
    (*conta).numero = numero;
    (*conta).saldo = saldo;
}

void Depositar(contaBancaria *conta, double valor)
{
    (*conta).saldo += valor;
}

void Sacar(contaBancaria *conta, double valor)
{
    (*conta).saldo -= valor;
}

void saldoConta(contaBancaria *conta)
{
    printf("Conta: %d\n", (*conta).numero);
    printf("Saldo: %.2f\n", (*conta).saldo);
}