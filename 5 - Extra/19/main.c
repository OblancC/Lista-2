#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
19) Crie um vetor global de CHAR
A) crie uma função para o usuário digitar uma frase
B) Crie uma função que Conte quantas letras A tem na frase
C) Crie uma função que reordene a frase, deixando-a de trás para frente.
*/
char frase[100];
char recebe_frase();
char letras();
char reordenar();

int main()
{
   recebe_frase();
   letras(frase);
   reordenar(frase);
    return 0;
}

char recebe_frase()
{
    printf("Digite a frase:\n");
    gets(frase);
    return 0;
}

char letras()
{
    int cont=0;
    for(int i=0;i<strlen(frase);i++){
        if(frase[i]=='a' || frase[i]=='A'){
            cont++;
        }
    }
    printf("Tem %i letras A na frase.\n",cont);
    return 0;
}

char reordenar()
{
    strrev(frase);
    printf("%s\n", frase);
    return 0;
}
