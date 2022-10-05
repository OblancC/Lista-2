#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;//Contador
    int num[5];
    int aux;

    for(i=0;i<5;i++){
        printf("Digite o %i Valor:\n", i+1);
        scanf("%i", &num[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(num[i]<num[j]){
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("[%i]",num[i]);
    }
    return 0;
}
