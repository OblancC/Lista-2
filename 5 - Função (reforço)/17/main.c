#include <stdio.h>
#include <stdlib.h>

float potencia(float x, float y);

int main()
{
    float base,expoente;
    printf("Informe a base:\n");
    scanf("%f", &base);
    printf("Informe o Expoente:\n");
    scanf("%f", &expoente);
    potencia(base,expoente);
    return 0;
}

float potencia(float x,float y)
{
    float total=x;
    for(int i=1;i<y;i++){
        total=total*x;
    }
    printf("%.2f ^%.2f = %.2f",x,y,total);
}
