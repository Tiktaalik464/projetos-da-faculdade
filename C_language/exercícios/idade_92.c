#include <stdio.h>
#include <stdlib.h>
int main (){
   
    system("cls");
     int ano_atual, idade;
     int ano_de_nasc = 1992;
    
    printf("Digite o ano atual: \n");
    scanf("%i", &ano_atual);
        
        idade = ano_atual - ano_de_nasc;
    
    printf("Sua idade e: %i\n", idade);
   


    return 0;
} 