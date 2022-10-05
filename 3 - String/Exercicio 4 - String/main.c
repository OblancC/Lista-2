#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

4) Faça um programa que recebe um frase sou usuário e troca todas as letras A por X;

*/

int main()
{
    char frase[100];
    int tamanho,i;
    printf("Digite a frase: \n");
    gets(frase);
    for(i=0;i<tamanho;i++){
        if(frase[i]=='a'||frase[i]=='A'){
            frase[i]='x';
        }
    }
    printf("%s", frase);
    return 0;
}
