#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen, strcpy

char *foo(char *);

int main()
{
    char *a = NULL;
    char *b = NULL;
    a = foo("Hola a todos, Saludes ");

    // Esta instruccion no deberia ir aqui,
    //  ya que aun se necesita "a"
    // free(a);

    b = foo("Adios");

    printf("Desde el principal: %s %s\n", a, b);

    // Liberacion correcta de la memoria
    free(a);
    free(b);
    printf("Memoria de \"a\" y \"b\" liberadas\n");
    return 0;
}

char *foo(char *p)
{
    char *q = (char *)malloc(strlen(p) + 1);
    strcpy(q, p);
    printf("Desde foo: la cadena es %s\n", q);
    return q;
}
