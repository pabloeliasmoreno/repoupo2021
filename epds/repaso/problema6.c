#include <stdio.h>

#define TAM_MAX 10
#define VALIDOS 5

int elimina_elemento(int posicion, float vector[], int tamanyo);
void imprime_vector(float vector[], int tam);

int main(void)
{

    int posicion, tamanyo = VALIDOS;
    float vector[TAM_MAX] = {1.0, 2.0, 3.0, 4.0, 5.0, -1.0, -1.0, -1.0, -1.0, -1.0};

    printf("\nVector original: ");
    imprime_vector(vector, VALIDOS);

    printf("\nIntroduzca la posición (máximo %d): ", TAM_MAX);
    scanf("%d", &posicion);

    tamanyo = elimina_elemento(posicion, vector, tamanyo);

    if (tamanyo == -1)
        printf("\nLa posición itroducida no es correcta");
    else
    {
        printf("\nVector modificado: ");
        imprime_vector(vector, tamanyo);
    }

    printf("\n\n");

    return 0;
}

int elimina_elemento(int posicion, float vector[], int tamanyo)
{

    int res = 0, i = 0;

    if (posicion < 0 || posicion > VALIDOS)
        res = -1;
    else
    {

        for (i = posicion; i < tamanyo; i++)
            /*En el caso en que sólo haya un elemento en el vector*/
            if (i == tamanyo - 1)
                vector[i] = -1;
            else
                vector[i] = vector[i + 1];

        res = i - 1;
    }

    return res;
}

void imprime_vector(float vector[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
        printf("%2.0f", vector[i]);
    printf("\n");
}