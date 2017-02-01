#include <stdio.h>
#include <stdlib.h>
#include "estring.h"
#include <string.h>
int main()
{
    int i = 0;
    estring* nuevoString, otroEstring;
    nuevoString = setEstring();

    /*
    while(*(nuevoString->buffer+i) != '\0')
    {
        printf("%c", *(nuevoString->buffer+i) );
        i++;
    }
    */
    printf("tamanio: %i", estring_lenght(nuevoString));
    //printString(nuevoString);


    return 0;
}





