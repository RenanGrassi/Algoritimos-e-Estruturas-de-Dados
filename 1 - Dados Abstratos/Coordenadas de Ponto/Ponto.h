typedef struct ponto Ponto;

//Novo ponto
Ponto* criar_ponto(float valor_x, float valor_y);

//Desaloca um ponto
void liberar_ponto(Ponto* ponto);

//Valores de X e Y de um ponto
void acessar_ponto(Ponto* ponto, float* valor_x, float* valor_y)

//Definir valores de X e Y
void atribuir_ponto(Ponto* ponto, float x, float y);

//Distancia entre pontos
float distancia_pontos(Ponto* pontoA, Ponto* pontoB);