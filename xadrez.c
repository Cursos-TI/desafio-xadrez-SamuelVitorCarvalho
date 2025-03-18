#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita \n");

        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita \n");

        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda \n");

        moverRainha(casas - 1);
    }
}

int main() {

    // Nível Mestre - Funções Recursivas e Loops Aninhados

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


    printf("\n **** Movimentação da Torre: ****\n\n");

    moverTorre(5);

    printf("\n **** Movimentação do Bispo: ****\n\n");

    moverBispo(5);

    printf("\n **** Movimentação da Rainha: ****\n\n");

    moverRainha(8);

    printf("\n **** Movimentação do Cavalo: ****\n\n");

    for (int movimentoL = 1, cavalo = 1; movimentoL < 2 || cavalo <= 2; ) {
        if (cavalo <= 2) {
            printf("Baixo \n");
            cavalo++;
        } else {
            printf("Esquerda \n");
            movimentoL++;
        }
    }

    return 0;
}
