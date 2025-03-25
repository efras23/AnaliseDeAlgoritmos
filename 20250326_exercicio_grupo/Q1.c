#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(int argc, char* argv[]){
	int vet_origem[TAM] = {3, 9, 1, -30, 4, 103, 33, 11, 23, 19};
	int vet_destino[TAM] = {0};
	int i = 0, j = 0;
	int aux = 0;
		
	for(i = 0; i < TAM; i++){
		vet_destino[i] = vet_origem[i];
		vet_origem[i] = -1;
	}
	
	for(i = 0; i < TAM - 1; i++){
		for(j = 0; j < TAM - 1; j++){
			if(vet_destino[j] > vet_destino[j+1]){
				aux = vet_destino[j+1];
				vet_destino[j+1] = vet_destino[j];
				vet_destino[j] = aux;
			}
		}
	}
	
	printf("Vetor DESTINO: [");
	for(i = 0; i < TAM; i++){
		printf(" %d ", vet_destino[i]);
	}
	printf("]\n");
	
	return 0;
}
