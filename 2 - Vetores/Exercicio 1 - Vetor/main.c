#include <stdio.h>
#include <stdlib.h>

/*
1) Crie um programa que lê 6 valores inteiros e,
em seguida, mostre na tela os valores lidos.
*/

int main()
{
    int valor[6];
    int i;

    for(i=0;i<6;i++){
        printf("Digite o valor para a %i posicao:\n", i+1);
        scanf("%i", &valor[i]);
    }
    for(i=0;i<6;i++){
        printf("Valor da %i posicao eh: %i\n",i+1,valor[i]);
    }
    return 0;
}
