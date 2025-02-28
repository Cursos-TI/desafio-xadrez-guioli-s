#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop para o movimento diagonal (Cima + Direita)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva para continuar o movimento
    moverBispo(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para o movimento do Cavalo usando loops aninhados
void moverCavalo(int casas_cima, int casas_direita) {
    for (int i = 0, j = 0; i < casas_cima || j < casas_direita; ) {
        if (i < casas_cima) {
            printf("Cima\n");
            i++;
            continue;  // Continua no loop sem executar a parte de "Direita"
        }

        if (j < casas_direita) {
            printf("Direita\n");
            j++;
        }
    }
}

int main() {
    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo: 2 casas para cima e 1 casa para a direita
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(2, 1);

    return 0;
}
