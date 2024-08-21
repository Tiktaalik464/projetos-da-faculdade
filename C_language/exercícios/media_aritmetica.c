#include <stdio.h>
int main(void){

int nota1, nota2, nota3, nota4;
float media;
    printf("digite sua primeira nota: ");
        scanf("%d", &nota1);

    printf("digite sua segunda nota: ");
        scanf("%d", &nota2);

    printf("digite sua terceira nota: ");
        scanf("%d", &nota3);

    printf("digite sua quarta nota: ");
        scanf("%d", &nota4);

media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("Sua media e: %.2f\n", media);

    return 0;
}