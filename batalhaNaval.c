#include <stdio.h>

#define TAM 10

// Função para exibir uma matriz
void exibirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int habilidade[TAM][TAM] = {0};

    // Cone (centro em 5,5)
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            habilidade[2 + i][3 + j] = cone[i][j];

    printf("Habilidade - Cone:\n");
    exibirMatriz(habilidade);

    printf("\n==========================\n");

    // Cruz (centro em 5,5)
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            habilidade[2 + i][3 + j] = cruz[i][j];

    printf("Habilidade - Cruz:\n");
    exibirMatriz(habilidade);

    printf("\n==========================\n");

    // Octaedro (centro em 5,5)
    int octaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            habilidade[2 + i][3 + j] = octaedro[i][j];

    printf("Habilidade - Octaedro:\n");
    exibirMatriz(habilidade);

    return 0;
}
