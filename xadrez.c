#include <stdio.h>

int main() {
    // Define o número de casas que cada peça irá se mover
    int movimentosTorre = 5;
    int movimentosBispo = 5;
    int movimentosRainha = 8;

    printf("Movimentacao da Torre:\n");
    // Movimento da Torre usando estrutura 'for' (5 casas para a direita)
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimentacao do Bispo:\n");
    // Movimento do Bispo usando estrutura 'while' (5 casas na diagonal "Cima Direita")
    int i = 0;
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\nMovimentacao da Rainha:\n");
    // Movimento da Rainha usando estrutura 'do-while' (8 casas para a esquerda)
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    return 0;
}
