#include <stdio.h>

int main(){

    int x = 10;
    int* p = &x;

    printf("Valor de x %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Conteudo de p( endereco: %p\n", p);
    printf("Valor apontado por p: %d\n\n", *p);

    *p = 25; // atribuir novo valor ao endereco da memoria onde esta o p

    printf("\nNovo valor de p : 25\n");
    printf("Valor de x %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Conteudo de p( endereco: %p\n", p);
    printf("Valor apontado por p: %d", *p);

    printf("\n\n");

    return 0;   
}