#include <stdio.h>
#include <stdlib.h>

int main (void){
	int tamanho, novotamanho;
	printf ("digite o tamanho do vetor: ");
	scanf ("%d", tamanho);
	int * vetor = (int*) calloc(tamanho,sizeof(int));
	
	printf("\ndigite um novo tamanho: ");
	scanf ("%d" &nonotamanho);
	vetor = (int*) realloc(vetor, novotamanho*sizeof(int));
	if (vetor==null){
		exit(1);
	}
	free(vetor);
	return 0;
}
