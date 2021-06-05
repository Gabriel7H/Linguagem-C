#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int j, i, A[5][5], B[5][5], soma[5][5];
	
	printf("\n\n******************* Matriz A ********************* \n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("Elemento [%d] [%d] = ", i, j);
			scanf ("%d", &A[i][j]);
		}
	}
	system("cls");
	
	printf("\n\n******************* Matriz B ********************* \n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("Elemento [%d] [%d] = ", i, j);
			scanf ("%d", &B[i][j]);
		}
	}
	system("cls");
	
	//SOMA DA MATRIZ A COM A MATRIZ B
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			soma[i][j] = A[i][j] + B[i][j]; 
		}
	}
	
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("[%d] [%d] = %d\n", i, j, soma[i][j]);
		}
	}
	system ("Pause");
	return 0;
}
