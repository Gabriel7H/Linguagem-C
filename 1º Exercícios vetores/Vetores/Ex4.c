#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int vet[5], i, j, aux, e;
	
	for (i=0; i<5; i++){
		printf ("Digite um Valor: ");
		scanf ("%d", &vet[i]);
	}
	for (i=0; i<5; i++){
		for (j=i+1; j<5; j++){
			if (vet[i] > vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	printf ("Em ordem crescente fica: \n");
	for (i=0; i<5; i++){
		printf ("{ %d }", vet[i]);
	}
	printf ("\n");
	system("Pause");
	return 0;
}
