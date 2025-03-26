// Cálculo da TRANSPOSTA de uma matriz quadrada.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
double time0, time_dif;

int main(int argc, char* argv[]){
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
    int matriz_t[TAM][TAM] = { 0 };
    int i = 0;
    int j = 0;

    // Cálculo TRANSPOSTA
    time0 = (double) clock();
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
    time_dif = (double) clock() / CLOCKS_PER_SEC - time0;
    printf("\nTempo TOTAL: %lf s\n", time_dif);

    return 0;
}