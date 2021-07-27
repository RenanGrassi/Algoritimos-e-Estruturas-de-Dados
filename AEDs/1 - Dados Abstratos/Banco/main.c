#include<stdio.h>
#include "contaBancaria.h"

int main(int argc, char** argv)
{
    contaBancaria conta;
    Inicializar(&conta, 202107, 1200.00);
    printf("\nPre Operacao:\n");
    saldoConta(&conta);
    Depositar(&conta, 600.00);
    Sacar(&conta, 259.59);
    printf("\nPos Movimentacao:\n");
    saldoConta(&conta);

    return 0;
}