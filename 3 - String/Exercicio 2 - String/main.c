#include <stdio.h>
#include <stdlib.h>

/*
    2) Fa�a um programa que dado uma frase escrita pelo usu�rio, retorne a posi��o do primeiro espa�o.
*/
int main()
{
    char frase[50];
    int i,local,tamanho;
    printf("Digite a frase\n");
    gets(frase);
    tamanho=strlen(frase);
    for(i=0;i<tamanho;i++){
        if(frase[i]==' '){
            local=i+1;
        }
    }
    printf("O local que se encontra o espaco eh: %i\n", local);
    return 0;
}
