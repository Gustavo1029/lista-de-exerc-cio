/******************************************************************************
Gustavo Nogueira Borges
7. Escreva uma função que retorne o cubo do valor passado como argume

*******************************************************************************/
#include <stdio.h>

int cubo(int n){
    return (n * n * n);
}

int main(){
    int n;
    printf("Digite o valor a ser passado: \n");
    scanf("%d", &n);
    
    printf("O cubo do valor passado e: %d\n", cubo(n));
}
