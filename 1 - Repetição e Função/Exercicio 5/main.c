#include <stdio.h>
#include <stdlib.h>

int quadrado (int coluna, int linha){
    int x,y;
    for(x=0;x<linha;x++){
        for(y=0;y<coluna;y++){
            printf("*");
        }
        printf("\n");
    }
}

int triangulo (int linha){
    int x,y,estrela;
     for (x = 0; x < linha; x++) {
        for (y = 0; y <= (linha - x - 1); y++) {
            printf(" ");
        }
        while (estrela != (2 * x + 1)) {
            printf("*");
            estrela++;;
        }
        estrela = 0;
        printf("\n");
    }
    return 0;
}

int circulo (int raio){
    int x,y;
    for (x=-raio;x<=raio;x++){
        printf("\t\t\t");
        for(y=-raio;y<=raio;y++){
            if(x*x+y*y == raio*raio){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int coluna,linha,opc,raio;
    printf("Digite qual formato geometrico deseja:\n 1 - Forma Quadricular\n 2 - Triangulo\n 3 - Circulo");
    scanf("%i", &opc);
    switch(opc){
    case 1:
        printf("Informe o valor de colunas\n");
        scanf("%i", &coluna);
        printf(" Informe o valor de linhas\n");
        scanf("%i", &linha);
        quadrado(coluna,linha);
        break;
    case 2:
        printf("Informe o valor de linhas:\n");
        scanf("%i", &linha);
        triangulo(linha);
        break;
    case 3:
        printf("Informe o valor do raio:\n");
        scanf("%i", &raio);
        circulo(raio);
        break;
    }
    return 0;
}
