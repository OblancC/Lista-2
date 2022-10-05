#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha,csenha,i;
    float salario,parcelas,valor_emprestimo,limit,valor_parcela;
    char dica;

    //Cadastro de senha
    while(senha != csenha || senha>9999){
        printf("Digite a senha:\n");
        scanf("%i", &senha);
        printf("Confirme a senha:\n");
        scanf("%i", &csenha);
        if(senha>9999){
            printf("Senha possui mais que 4 digitos.\n");
        }else{
            if(senha == csenha){
                printf("Senha Valida.\nCadastro criado.");
            }
        }
    }

    //Login

    for(i=3;i>0;i--){
        printf("Digite a senha:");
        scanf("%i",&csenha);
        if(senha==csenha){
            printf("Senha Valida.\n Digite o seu Salario:\n");
            scanf("%f", &salario);
            printf("Digite a quantidade de parcelas:\n");
            scanf("%f", &parcelas);
            printf("Digite o Valor do Emprestimo:\n");
            scanf("%f",&valor_emprestimo);
            limit=salario*0.3;
            valor_parcela=valor_emprestimo/parcelas;
            if(limit>valor_parcela){
                printf("Valor do emprestimo aceito.");
            }else{
                printf("Valor do emprestimo negado.");
                break;
            }
        }else{
            printf("Voce possui mais %i tentativas", i-1);
        }
    }

    return 0;
}
