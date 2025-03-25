// Cálculo da TRANSPOSTA de uma matriz quadrada.
#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(int argc, char* argv[]){
    int matriz[TAM][TAM] = {
                            0, 1, 2, 3,
                            4, 5, 6, 7,
                            8, 9, 10, 11,
                            12, 13, 14, 15
                            };
    int matriz_t[TAM][TAM] = { 0 };
    int i = 0;
    int j = 0;

    // Cálculo TRANSPOSTA
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            matriz_t[i][j] = matriz[j][i];
        }
    }

    // Impressão matriz "normal"
    printf("\nM\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("\t%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Impressão matriz TRANSPOSTA
    printf("\nM_T\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("\t%d\t", matriz_t[i][j]);
        }
        printf("\n");
    }

    return 0;
}