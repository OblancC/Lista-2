#include <stdio.h>
#include <stdlib.h>

/*
3) Crie um programa com um vetor de 10 posi��es chamado
TABUADA. O usu�rio dever� fornecer um n�mero inteiro,
e seu vetor deve ser preenchido (automaticamente)
com a tabuada desse n�mero.
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
