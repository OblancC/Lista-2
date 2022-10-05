#include <stdio.h>
#include <stdlib.h>
/*
 18) Crie um vetor GLOBAL que comporta 10 números decimais (com VÍRGULA);
    A) Crie uma função para o usuário digitar 10  alturas;
    B) Crie uma função que retorna o valor do menor número;
    C)Crie uma função que ordena e imprime o vetor do maior para o menor número.
*/
float altura[10];
float receber_altura();
float menor();
float ordenar();

int main()
{
    receber_altura();
    menor(altura);
    ordenar(altura);
    return 0;
}

float receber_altura(){
    for(int i=0;i<10;i++){
        printf("Digite a altura [%i]: \n",i+1);
        scanf("%f",&altura[i]);
    }
    return 0;
}

float menor(){
    float temp;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(altura[i]>altura[j]){
                temp = altura[j];
            }
        }
    }
    printf("Menor Numero: %.2f\n", temp);
    return 0;
}

float ordenar(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(altura[i]<altura[j]){
                float temp = altura[i];
                altura[i] = altura[j];
                altura[j] = temp;
            }

        }
    }
    for(int i=0;i<10;i++){
        printf("[%.2f] ", altura[i]);
    }
    return 0;
}
