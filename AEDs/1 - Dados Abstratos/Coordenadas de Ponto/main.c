#include "Ponto.h"

int main(int argc, char** argv)
{
    float distancia;
    Ponto *p1, *p2;
    p1 = criar_ponto(15, 56);
    p2 = criar_ponto(7, 21);
    distancia = distancia_entre_pontos(p1, p2);
    printf("A distância entre os pontos é: %.2f.\n", distancia);
    liberar_ponto(p1);
    liberar_ponto(p2);

    system("pause");
    return 0;
}