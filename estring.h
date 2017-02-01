#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct estring
{
    char* buffer;
} estring;

estring* setEstring();
estring* resize(estring *estring);
void printString(estring *estring);
int estring_lenght(estring* estringLongitud);
estring* concat(estring primerEstring, estring segundoEstring);

#endif
