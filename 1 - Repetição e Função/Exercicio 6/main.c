#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc,cont;
    float qntd,valor,total,desc;
    do
    {
        printf("\tOpcao\t|\tPao\t|\tValor(unidade)\t|\n\t1\t|\tForma\t|\tR$ 7,50\t\t|\n\t2\t|\tCenteio\t|\tR$ 8,69\t\t|\n\t3\t|\tBroa\t|\tR$ 5,00\t\t|\n");
        scanf("%i", &opc);
        switch(opc)
        {

        case 1:
            valor=7.5;
            printf("Pao de Forma selecionado\nDigite a quantidade:\n");
            scanf("%f", &qntd);
            break;
        case 2:
            valor=8.69;
            printf("Pao de Centeio selecionado\nDigite a quantidade:\n");
            scanf("%f", &qntd);
            break;
        case 3:
            valor=5;
            printf("Pao de Broa selecionado\nDigite a quantidade:\n");
            scanf("%f", &qntd);
            break;
        default:
            if(total>0){
                printf("Opcao invalida.\nValor das compras: %.2f", total);
            }else{
                printf("Produto invalido.");
            }
            return 0;

        }
        total=total+valor*qntd;
        printf("\tDeseja comprar mais alguma coisa?\n\t1\t-\tSim\n\t2\t-\tNao\n");
        scanf("%i", &opc);
        if(opc == 2){
            cont++;
        }


    }while(cont<1);
    if(total>=50 && total<=99.99)
    {
        desc=total*0.95;
        printf("Valor s/ desconto : %.2f\nValor c/ Desconto: %.2f",total,desc);
    }
    else if(total>=100 &&  total<=199.99)
    {
        desc=total*0.9;
        printf("Valor s/ desconto : %.2f\nValor c/ Desconto: %.2f",total,desc);
    }
    else if(total>=200)
    {
        desc=total*0.85;
        printf("Valor s/ desconto : %.2f\nValor c/ Desconto: %.2f",total,desc);
    }
    else
    {
        printf("Valor Final: %.2f", total);
    }
    return 0;
}
