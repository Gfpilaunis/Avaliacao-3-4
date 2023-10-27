#include <stdio.h>
#include <stdlib.h>

int matriz[3][2] = {
    {1, 3},
    {2, 7},
    {1, 2}
};

int main() {
    // DEFINIR TAMANHOS
    int numLinhas = sizeof(matriz) / sizeof(matriz[0]);
    int numColunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    int matriz2[numColunas][numLinhas];

    // VERIFICAR TAMANHO
    for (int i = 0; i < numLinhas; i++) {
        for (int j = 0; j < numColunas; j++) {
            matriz2[j][i] = matriz[i][j];
        }
    }

    // PRINTAR
    for (int i = 0; i < numColunas; i++) {
        for (int j = 0; j < numLinhas; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
}