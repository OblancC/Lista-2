#include <stdio.h>
#include <stdlib.h>

/*
6) (esse é tendência) Faça um programa que permita ao usuário digitar 10 valores, seu programa deve retornar a MODA.
*/

int i,j;//Contador
int moda,contador;
int cont[10], valor[10];
int main()
{
    for(i=0;i<10;i++){
        printf("Digite o Valor da %i posicao:\n",i+1);
        scanf("%i", &valor[i]);
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(valor[i]==valor[j]){
                cont[i]++;
                if(cont[i]>contador){
                    contador=cont[i];
                    moda=valor[i];
                }
            }
        }
    }
    printf("Valor da moda eh: %i, que se repete %i vezes", moda,contador);
    return 0;
}
