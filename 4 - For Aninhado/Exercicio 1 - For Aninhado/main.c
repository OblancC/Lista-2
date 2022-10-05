#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j; // contador
    int num[5];
    int maior;
    for(i=0;i<5;i++){
        printf("Digite o %i Numero:\n", i+1);
        scanf("%i",&num[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(num[i]<num[j]){
                maior=num[j];
            }
        }
    }
    printf("Maior valor eh: %i",maior);
    return 0;
}
