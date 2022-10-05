#include <stdio.h>
#include <stdlib.h>

/*
  5) Faça um programa  que recebe 10 valores inteiros
  fornecidos pelo usuário, e retorna a quantidade
  de números 7
*/

int main()
{
    int valores[10];
    int i,cont=0;
    for(i=0;i<10;i++){
        printf("Digite o %i valor: \n", i+1);
        scanf("%i", &valores[i]);
        if(valores[i]==7){
            cont++;
        }
    }
    printf("Nos 10 valores temos a repeticao do Valor 7 : %i vezes.", cont);
    return 0;
}
