
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen

int main()
{
    char *q = NULL;
    printf("Consultando espacio para \"Adios\"\n");
    q = (char *)malloc(strlen("Adios") + 1);

    printf("Copiando \"Adios\" en \"q\" (dir %u) \n", q);
    strcpy(q, "Adios");

    printf("Cadena copiada\n");
    printf("q = %s\n", q);

    return 0;
}
