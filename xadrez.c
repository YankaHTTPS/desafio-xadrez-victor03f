#include <stdio.h>

// Função recursiva para movimentação do Bispo (diagonal direita para cima)
void mover_bispo(int casas) {
    // Caso base: se as casas acabaram, paramos a recursão
    if (casas == 0) {
        return;
    }

    // Movemos o bispo uma casa para a diagonal direita para cima
    printf("Movimento Bispo: Diagonal Direita para Cima\n");

    // Chamada recursiva para mover o bispo até as 5 casas
    mover_bispo(casas - 1);
}

// Função para movimentação do Cavalo (1 vez em L para cima à direita)
void mover_cavalo() {
    printf("Movimento do Cavalo: \n");

    // Loop aninhado para movimentar o cavalo em L (2 casas para cima e 1 para a direita)
    for (int i = 0; i < 2; i++) {  // Loop para 2 movimentos (cima)
        if (i == 1) {
            printf("  Cima\n");  // Movimenta 1 casa para cima
        } else {
            continue;  // Pula para o próximo ciclo do loop sem executar o código abaixo
        }
    }

    for (int j = 0; j < 1; j++) {  // Loop para 1 movimento à direita
        printf("  Direita\n");  // Movimenta 1 casa para a direita
    }
}

// Função para movimentação da Torre (5 casas para a direita)
void mover_torre() {
    printf("Movimento Torre: \n");

    // Usando um loop for para mover a torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("  Direita\n");  
    }
}

// Função para movimentação da Rainha (8 casas para a esquerda)
void mover_rainha() {
    printf("Movimento Rainha: \n");

    // Usando um loop for para mover a rainha 8 casas para a esquerda
    for (int i = 0; i < 8; i++) {
        printf("  Esquerda\n");
    }
}

int main() {
    // Movimentação das peças

    // Movimentação do Bispo (5 casas na diagonal direita para cima)
    printf("Movimentação do Bispo:\n");
    mover_bispo(5);

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre:\n");
    mover_torre();

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    mover_rainha();

    // Movimentação do Cavalo (1 vez em L para cima à direita)
    printf("\n");
    mover_cavalo();

    return 0;
}
