#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(int argc, char* argv[]){
	int vet[TAM] = {3, 9, 1, -30, 4, 103, 33, 11, 23, 19};
	int vet_cresc[TAM] = {0};
	int i = 0, j = 0;
	int temp = 0;
		
	for(i = 0; i < TAM; i++){
		vet_cresc[i] = vet[i];
		vet[i] = -1;
	}
	
	for(i = 0; i < TAM - 1; i++){
		for(j = 0; j < TAM - 1; j++){
			if(vet_cresc[j] > vet_cresc[j+1]){
				temp = vet_cresc[j+1];
				vet_cresc[j+1] = vet_cresc[j];
				vet_cresc[j] = temp;
			}
		}
	}
	
	printf("Vetor DESTINO: [");
	for(i = 0; i < TAM; i++){
		printf(" %d ", vet_cresc[i]);
	}
	printf("]\n");
	
	return 0;
}
