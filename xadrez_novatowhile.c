#include <stdio.h>

int main() {

    printf("Bispo\n");

    int numero;

    int i = 1;

    while (i <= 4) {
        printf("Cima e direita\n");
        i++; // uma movimentação

    }
    do {
        printf("Rainha, digite um numero para a movimentacao...\n");
        scanf("%d", &numero);

        if (numero == 1)
            printf("Direita\n");
          else if (numero == 2)
            printf("Esquerda\n");
         else if (numero == 3)
            printf("Baixo\n");
          else if (numero == 4)
            printf("Cima\n");
        else
            printf("Opcao invalida\n");
    } while (numero != 01);




return 0;

}