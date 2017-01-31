#include <stdio.h>
#include <stdlib.h>
#include "estring.h"
#include <string.h>
int main()
{
    int i = 0;
    estring* nuevoString, otroEstring;
    nuevoString = setEstring();
    printf("tamaño sin inicializar: %d", sizeof(otroEstring));

    while(*(nuevoString->buffer+i) != '\0')
    {
        printf("%c", *(nuevoString->buffer+i) );
        i++;
    }

    //printString(nuevoString);
    printf("%c", nuevoString->buffer[6]);

    return 0;
}





