#include <stdio.h>
#include <stdlib.h>

/*
  5) Fa�a um programa  que recebe 10 valores inteiros
  fornecidos pelo usu�rio, e retorna a quantidade
  de n�meros 7
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
