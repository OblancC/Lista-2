#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1) Fa�a um programa que dado uma frase escrita pelo usu�rio, retorne quantos caracteres tem.
*/

int main()
{
    char frase[50];
    printf("Digite a frase:\n");
    gets(frase);
    printf("A frase tem %d caracteres.",strlen(frase));
    return 0;
}
