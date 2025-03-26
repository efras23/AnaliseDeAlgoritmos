#include <stdio.h>
#define TAM 4

void imprimeMatriz(int matriz[TAM][TAM]) {
	int i, j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transposta(int matriz[TAM][TAM]) {
	int i, j;
    // Transposta in-place para matriz 4x4
    for (i = 0; i < TAM; i++) {
        for (j = i + 1; j < TAM; j++) {
            // Troca apenas elementos acima da diagonal principal
            int temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

int main() {
    int matriz[TAM][TAM] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}
    };
    
    printf("Matriz Original:\n");
    imprimeMatriz(matriz);

    transposta(matriz);

    printf("\nMatriz Transposta:\n");
    imprimeMatriz(matriz);

    return 0;
}

/* 

Fórmula Matemática:
n(n-1)/2 operações, onde n = TAM
4(4-1)/2 = 6 operações

Complexidade: O(n)
- Número fixo de operações
- Independente do conteúdo da matriz
*/
