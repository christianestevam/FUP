// Implemente um programa que recebe dois números inteiros e imprime o maior.

#include <stdio.h>

int main()
{
    int n, n2;
    printf("Insira um numero: ");
    scanf("%d", &n);
    printf("Insira outro numero: ");
    scanf("%d", &n2);
    if (n > n2)
        printf("%d", n);
    else
        printf("%d", n2);
}
