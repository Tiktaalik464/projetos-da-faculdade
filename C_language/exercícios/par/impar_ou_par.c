#include <stdio.h>
#include <stdlib.h>

int main() {
    // Limpa a tela
    system("cls");

    // Declaração da variável
    int numero;

    // Solicita ao usuário que digite um número
    printf("Digite seu numero: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("%d e um numero par.\n", numero);
    } else {
        printf("%d e um numero ímpar.\n", numero);
    }

    return 0;
}
