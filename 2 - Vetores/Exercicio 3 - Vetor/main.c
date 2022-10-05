#include <stdio.h>
#include <stdlib.h>

/*
3) Crie um programa com um vetor de 10 posições chamado
TABUADA. O usuário deverá fornecer um número inteiro,
e seu vetor deve ser preenchido (automaticamente)
com a tabuada desse número.
*/

int main()
{
    int tabuada[10];
    int i,valor;

    printf("Digite o valor que deseja descobrir a tabuada:\n");
    scanf("%i", &valor);
    for(i=0;i<=10;i++){
        tabuada[i]=i*valor;
    }
    for(i=0;i<=10;i++){
        printf(" %i x %i =\t%i\n",valor,i,tabuada[i]);
    }
    return 0;
}
