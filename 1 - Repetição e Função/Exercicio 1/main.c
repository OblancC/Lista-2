#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,result,cont;
    char ope;

    while(cont<=9999999){
        printf("Informe a operacao\n");
        scanf("%c", &ope);
        getchar();
        cont++;
        switch(ope){
            case '+':
                printf("Digite o Valor para x:\n");
                scanf("%f", &x);
                getchar();
                printf("Digite o Valor para y:\n");
                scanf("%f", &y);
                getchar();
                result=(x+y);
                break;

            case '-':
                printf("Digite o Valor para x:\n");
                scanf("%f", &x);
                getchar();
                printf("Digite o Valor para y:\n");
                scanf("%f", &y);
                getchar();
                result=(x-y);
                break;

            case '*':
                printf("Digite o Valor para x:\n");
                scanf("%f", &x);
                getchar();
                printf("Digite o Valor para y:\n");
                scanf("%f", &y);
                getchar();
                result=(x*y);
                break;

            case '/':
                printf("Digite o Valor para x:\n");
                scanf("%f", &x);
                getchar();
                printf("Digite o Valor para y:\n");
                scanf("%f", &y);
                getchar();
                result=(x/y);
                break;

            case '=':
                cont=99999999999;
                break;
            default:
                printf("Digite apenas as seguintes operacoes : '+', '-', '/', '*'");
                break;
        }
        printf("o valor total eh de %.2f\n", result);
    }
    return 0;
}
