#include<stdio.h>
#include<math.h>
#include "Ponto.h"
//Aspas indicam biblioteca local, não de sistema.

//Tipo de dado abstrato chamado Ponto.
struct Ponto
{
    float valor_x;
    float valor_y;
}

//Aloca um espaço na memória para o Ponto.
Ponto* criar_ponto(float valor_x, float valor_y)
{
    //A função do sistema, 'malloc', aloca esse espaço 
    Ponto* ponto= (Ponto*) malloc(sizeof(Ponto));
    if(ponto != NULL)
    {
        ponto->valor_x = valor_x;
        ponto->valor_y = valor_y;
    }

    return ponto;
}

//Desaloca o espaço reservado pela função 'criar_ponto'
void liberar_ponto(Ponto* ponto)
{
    free(ponto);
}

//Aceesar por referencia o valor dde um ponto
void acessar_ponto(Ponto* ponto, float* valor_x, float* valor_y)
{
    valor_x = ponto->valor_x;
    valor_y = ponto->valor_y;
}

//Associa um ponto as coordenadas cartesianas.
void atribuir_ponto(Ponto* ponto, float x, float y)
{
    ponto->valor_x = x;
    ponto->valor_y = y;
}

float distancia_entre_pontos(Ponto* pontoA, Ponto* pontoB)
{
    float distancia_em_X = pontoA->valor_x - pontoB->valor_x;
    float distancia_em_Y = pontoA->valor_y - pontoB->valor_y;
    return sqrt((distancia_em_X * distancia_em_X) + (distancia_em_Y * distancia_em_Y));
}