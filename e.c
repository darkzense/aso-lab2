#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strlen, strcpy

char *foo(char *);

int main()
{
    char *a = NULL;
    char *b = NULL;
    a = foo("Hola a todos, Saludes ");
    b = foo("Adios ");
    printf("Desde el principal: %s %s\n", a, b);

    return 0;
}

char *foo(char *p)
{
    char *q = (char *)malloc(strlen(p) + 1);
    strcpy(q, p);
    printf("Desde foo: la cadena es %s\n", q);
    return q;
}
