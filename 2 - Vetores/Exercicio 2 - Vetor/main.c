#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) Crie um programa com o um votor chamado int POLENTA [6]
o usu�rio dever� preencher esse vetor com n�meros
inteiros, depois seu programa deve imprimir na tela o
dobro de cada valor.
*/

int main()
{
    int polenta[6];
    int i,dobro; // a variavel 'i' � o contador

    for(i=0;i<5;i++){
        printf("Digite o %i valor\n", i+1);
        scanf("%i", &polenta[i]);
        polenta[i]= pow(polenta[i],2);
    }
    for(i=0;i<5;i++){
        printf("O valor da %i posicao eh: %i\n",i+1,polenta[i] );
    }
    return 0;
}
