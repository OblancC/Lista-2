#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

3) (Disco da XUXA - DESAFIO) crie um programa que recebe uma frase escrita pelo usu�rio, seu programa deve imprimir na tela a
frase de tr�s para frente.

*/

int main()

{
    char frase[100];
    printf("Digite a frase:");
    gets(frase);
    strrev(frase);
    printf("%s",frase );
    return 0;
}
