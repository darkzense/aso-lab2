#include <stdio.h>
#include <string.h> // Faltante para usar "strcpy"
#include <stdlib.h> // malloc

int main()
{
    // Reservación correcta de memoria de los punteros
    char *p = (char *)malloc(32);
    char *q = (char *)malloc(32);

    printf("Direccion de p = %u\n", p);

    printf("Copiando \"Hola\" en \"p\"\n");
    strcpy(p, "Hola");
    printf("Cadena Copiada\n");
    printf("p = %s\n", p);

    printf("---\n");

    printf("Copiando \"Adios\" en \"q\"\n");
    strcpy(q, "Adios");
    printf("Cadena Copiada\n");
    printf("q = %s\n", q);

    return 0;
}
