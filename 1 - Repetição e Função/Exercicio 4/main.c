#include <stdio.h>
#include <stdlib.h>

float imc (float peso, float altura)
{
    float imc;
    imc = peso / (altura*altura);
    printf("\tO IMC eh : %.2f\n", imc);
    if(imc>=18.5 && imc<=24.9)
    {
        printf("\tNormal.\n\n");
    }
    else if(imc>=25 && imc<=29.9)
    {
        printf("\tSobrepeso.\n\n");
    }
    else if(imc>=30)
    {
        printf("\tObesidade.\n\n");
    }
    else
    {
        printf("\tValor invalido.\n\n");
    }
}

int main()
{
    int i,opc,cont;
    float resultado,peso,altura;
    while(cont<9999)
    {
        for(i=0; i<10; i++)
        {
            printf("Digite o Peso da pessoa:\n\t");
            scanf("%f", &peso);
            printf("Digite a Altura da pessoa:\n\t");
            scanf("%f", &altura);
            resultado= imc(peso,altura);
        }
        printf("\tDeseja selecionar mais 10 pessoas?\n1\t-\t Sim\n2\t-\tNao\n\t");
        scanf("%i", &opc);
        if(opc==2)
        {
            printf("Sistema finalizado");
            cont=10000;
            break;
        }
        else
        {
            cont=0;
        }
    }
    return 0;
}
