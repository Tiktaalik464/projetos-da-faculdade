#include <stdio.h>
#include <stdlib.h>
 int main(){
    system ("cls");
   
    int cont = 1;
    int soma = 0;
while (cont <= 1000)
{
    soma = soma + cont;
    cont ++;
}
printf("A soma e: %i\n", soma);

return 0;
}