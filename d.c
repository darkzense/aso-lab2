#include <stdio.h>
#include <string.h> // strlen, strcpy
#include <stdlib.h> // malloc

// prototipo
char *foo(char *);

int main()
{
    char *a = NULL;
    char *b = NULL;
    a = foo("Hola a todos, Saludes");
    b = foo("Adios");
    printf("Desde el principal: \"%s %s\"\n", a, b);

    return 0;
}

char *foo(char *p)
{
    // El problema de este modo de asignacion es que
    //  se asigna espacio localmente para la funcion "foo".
    // Fuera de este "scope" el valor de "q" no estara definido.
    //  resultando en retornos "null".

    // char q[strlen(p) + 1];

    // Asignacion permanente de memoria
    char* q = (char*) malloc(strlen(p) + 1);
    strcpy(q, p);

    printf("Desde q: la cadena es \"%s\"\n", q);
    return q;
}
