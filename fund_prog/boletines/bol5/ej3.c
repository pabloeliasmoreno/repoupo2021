#include <stdio.h>
int instanteIntermedio (int h1, int m1, int s1, int h2, int m2, int s2);

int main()
{
    int h1, h2, m1, m2, s1, s2, segTotal, htot, mtot, stot;
    printf("Indica una hora con el siguiente formato HH:MM:SS -> ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Indica otra hora con el siguiente formato HH:MM:SS -> ");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    segTotal = instanteIntermedio(h1, m1, s1, h2, m2, s2);
    // Pasamos de segundos a hora completa
    htot = segTotal / 3600;
    mtot = ((segTotal - (htot * 3600)) / 60);
    stot = (segTotal - ((mtot * 60) + (htot * 3600)));
    printf("El instante intermedio es %d:%d:%d\n", htot, mtot, stot);
}

int instanteIntermedio(int h1, int m1, int s1, int h2, int m2, int s2)
{
    int seg1, seg2, segMedia, insMed;
    seg1 = ((h1 * 3600) + (m1 * 60) + (s1));
    seg2 = ((h2 * 3600) + (m2 * 60) + (s2));
    // Calculamos la media de los dos tiempos
    segMedia = ((seg2 - seg1)/2);
    // Calculamos el instante medio
    insMed = (seg1 +segMedia);
    // Devolvemos el instante medio en segundos
    return insMed;
}