#include <stdio.h>
typedef struct
{
    char descripcion[30];
    float precio;
} Producto;
void aumentaPrecio(Producto *, float);
void main(void)
{
    Producto p = {"Colacao", 2.20};
    printf("%s: %f euros\n", p.descripcion, p.precio);
    aumentaPrecio(&p, 10);
    printf("%s: %f euros", p.descripcion, p.precio);
}
void aumentaPrecio(Producto *p, float porcentaje)
{
    p->precio = p->precio + p->precio * porcentaje / 100;
}
