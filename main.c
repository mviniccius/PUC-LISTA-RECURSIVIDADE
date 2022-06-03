#include <stdio.h>

int retornaResto(int a, int b);
int restoRecursivo(int a, int b);

int main()
{

    /*
        1 - Faça um programa que peça ao usuários dois valores e imprima o resto inteiro da divisão de X por Y –você não pode
            utilizar o operador %
        2 –Faça uma função que receba dois parâmetros (passados por valor) e retorne  o resto inteiro da divisão de X por Y –
            você não pode utilizar o operador %
        3 –Faça uma função RECURSIVA que receba dois parâmetros (passados por valor) e retorne  o resto inteiro da divisão de X
            por Y
    */

    int x, y, resto;

    printf("Digite um valor: ");
    scanf("%i", &x);
    printf("Digite um valor para saber o resto da divisao por %i: ", x);
    scanf("%i", &y);


    if (x < y)
    {
        printf("O resto da divisao de %i por %i = %i\n", x, y, x);
    }
    resto = x;
    while (resto >= y)
    {
        if(resto >= y)
        {
            resto = resto - y;
        }
    }
    printf("O resto eh %i\n", resto);

    printf("Utilzando paramentro!\n");

    printf("Digite um valor: ");
    scanf("%i", &x);
    printf("Digite um valor para saber o resto da divisao por %i: ", x);
    scanf("%i", &y);
    printf("O resto da divisao de %i por %i = %i\n", x, y, retornaResto(x, y));

    printf("UTILIZANDO FUNCAO RECURSIVA!\n");
    printf("Digite um valor: ");
    scanf("%i", &x);
    printf("Digite um valor para saber o resto da divisao por %i: ", x);
    scanf("%i", &y);
    printf("O resto da divisao de %i por %i = %i\n", x, y, restoRecursivo(x, y));


    return 0;
}

int retornaResto(int a, int b)
{

    if (a < b)
    {
        return a;
    }

    while (a >= b)
    {
        if(a >= b)
        {
            a = a - b;
        }
    }
    return a;
}

int restoRecursivo(int a, int b)
{
    if (a < b)
    {
        return a;
    }

    if(a >= b)
    {
        return restoRecursivo(a-b, b);
    }
    return 1;
}
