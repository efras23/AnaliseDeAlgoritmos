// Cálculo da TRANSPOSTA de uma matriz 4x4.
// Para manter a ordem O(n), tratamos a matriz como um único vetor.
#include <stdio.h>
#include <stdlib.h>
#define TAM 4*4

void imprimir_matriz(int matriz[]){
    int i;

    for(i = 0; i < TAM; i++){
        printf("\t%d\t", matriz[i]);
        if (i == 3 || i == 7 || i == 11)
            printf("\n");
    }
}

void transpor_matriz(int matriz[]){
    int i, temp;

    for(i = 0; i < TAM; i++){
        if (i > 0 && i < 4) {
            temp = matriz[i];
            matriz[i] = matriz[i+3*i];
            matriz[i+3*i] = temp;
        }
        if (i == 6 || i == 11) {
            temp = matriz[i];
            matriz[i] = matriz[i+3];
            matriz[i+3] = temp;
        }
        if (i == 7){
            temp = matriz[i];
            matriz[i] = matriz[i+3*2];
            matriz[i+3*2] = temp;
        }
    }
}

int main(int argc, char* argv[]){
    int matriz[TAM] = {
                       1, 2, 3, 4,
                       5, 6, 7, 8,
                       9, 10, 11, 12,
                       13, 14, 15, 16
                       };

    // Impressão matriz "normal"
    printf("\nM:\n");
    imprimir_matriz(matriz);

    // Cálculo TRANSPOSTA
    transpor_matriz(matriz);

    // Impressão matriz
    printf("\nM_T:\n");
    imprimir_matriz(matriz);

    return 0;
}

/*
    int matriz[TAM][TAM] = {
                            1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                            31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                            41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                            51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
                            61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
                            71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
                            81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
                            91, 92, 93, 94, 95, 96, 97, 98, 99, 100
                            };
*/