#include <stdio.h>

#define TAM_MAX 10
#define VALIDOS 5

int inserta_elemento(float elemento, int posicion, float vector[], int tamanyo);
void imprime_vector(float vector[], int tam);

int main(void)
{

    int posicion, tamanyo = VALIDOS;
    float elemento, vector[TAM_MAX] = {1.0, 2.0, 3.0, 4.0, 5.0, -1.0, -1.0, -1.0, -1.0, -1.0};

    printf("\nVector original: ");
    imprime_vector(vector, VALIDOS);

    printf("\nIntroduzca el elemento: ");
    scanf("%f", &elemento);

    printf("Introduzca la posición (máximo %d): ", VALIDOS);
    scanf("%d", &posicion);

    tamanyo = inserta_elemento(elemento, posicion, vector, tamanyo);

    if (tamanyo == -1)
        printf("\nLa posición introducida no es correcta");
    else
    {
        printf("\nVector modificado: ");
        imprime_vector(vector, tamanyo);
    }

    return 0;
}

int inserta_elemento(float elemento, int posicion, float vector[], int tamanyo)
{

    int res = 0, i = 0;
    float anterior, aux;

    /*Si se sale del vector*/
    if (posicion < 0 || posicion > tamanyo)
        res = -1;
    /*Caso en que se guarde en el ultimo*/
    else if (posicion == tamanyo && (tamanyo + 1) < TAM_MAX)
    {
        vector[tamanyo] = elemento;
        res = tamanyo + 1;
    }
    else
    { /*la posicion está en medio del vector*/
        aux = vector[posicion];
        vector[posicion] = elemento;
        anterior = aux;

        for (i = posicion + 1; i < tamanyo + 1; i++)
        {
            aux = vector[i];
            vector[i] = anterior;
            anterior = aux;
        }

        res = i;
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