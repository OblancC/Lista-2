#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
  4) Faça um programa que, em um vetor chamado NUM
  armazene 5 valores reais (números decimais),
  seu programa deve armazenar em outro vetor chamado
  QUADRADO o valor de cada número do vetor NUM ao
  quadrado.
*/

int main()
{
    int NUM[5],QUADRADO[5];
    int i;
    for(i=0;i<5;i++){
        printf("Digite o Valor para a %i posicao:\n",i+1);
        scanf("%i", &NUM[i]);
        QUADRADO[i]= pow(NUM[i], 2);
    }
    for(i=0;i<5;i++){
        printf("Vetor NUM : %i\nVetor Quadrado: %i\n\n", NUM[i],QUADRADO[i]);
    }
    return 0;
}
