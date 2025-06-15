#include <stdio.h>

#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO_VERTICAL 2
#define MOV_CAVALO_HORIZONTAL 1

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo, combinada com loops aninhados
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0) return;
    
    for (int i = 0; i < horizontais; i++) {
        printf("Cima, Direita\n");
    }
    
    moverBispo(verticais - 1, horizontais);
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(MOV_TORRE);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(MOV_BISPO, 1);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(MOV_RAINHA);

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < MOV_CAVALO_VERTICAL; i++) {
        printf("Cima\n");
        if (i == MOV_CAVALO_VERTICAL - 1) {
            for (int j = 0; j < MOV_CAVALO_HORIZONTAL; j++) {
                if (j == 1) continue;  // Exemplo de uso de continue
                printf("Direita\n");
            }
        }
    }

    return 0;
}
