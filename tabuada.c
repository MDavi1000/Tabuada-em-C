
// Tabuada

#include <stdio.h>

int main()
{

int numero, multiplicador;

printf("Bem vindo!\n");

printf("Insira um numero para a tabuada: \n");
scanf("%d", &numero);

for (multiplicador = 0; multiplicador <= 10; multiplicador++) //definicao de condicoes;s
{
    printf("%d x %d = %d \n", multiplicador, numero, multiplicador * numero); //operacao e resultado;
}

return 0;
}