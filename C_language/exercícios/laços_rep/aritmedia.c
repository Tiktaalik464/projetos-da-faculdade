#include <stdio.h>
#include <stdlib.h>
    int main(){
        system ("cls");

    int numero;
    int somaDosNumeros = 0;
    int media;
    
for (int i = 1; i <= 3; i++)
{
    printf("digite o numero: %i\n", i);
    scanf("%i", &numero);
    somaDosNumeros += numero;
}
media = somaDosNumeros / 3;
printf("a Sua media e: %i\n", media);



    return 0;
    }