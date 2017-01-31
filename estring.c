#include <stdio.h>
#include "estring.h"
#define MAX 256
estring* setEstring()
{
    estring* estringRetorno;
    estringRetorno = malloc(sizeof(char) * MAX);

    scanf("%[^\n]s", estringRetorno->buffer);

    //estringRetorno = resize(estringRetorno);
    return estringRetorno;

    //printf("%c", *(nuevoEstring->buffer+1) );
}

/*
void printString(estring *estring)
{
    int i = 0;
    for(i = 0; i< estring; i++)
    {
        printf("%c", *(estring->buffer+i) );
    }
    printf("\n");
}
*/


estring* resize(estring *estringCrudo)
{
    int i = 0;
    int total = 0;
    estring* nuevoEstring;

    while(*(estringCrudo->buffer+i) != '\0')
    {
        total++;
        i++;
    }

    nuevoEstring = (estring*) realloc(estringCrudo, total);
    return  nuevoEstring;
}

int estring_lenght(estring* estringLongitud)
{

}
