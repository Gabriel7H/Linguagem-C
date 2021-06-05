#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int j, i, n[10][12], soma=0;

	setlocale (LC_ALL, "Portuguese");
	for (i=0; i<10; i++){
		for (j=0; j<12; j++){
			printf ("Elemento [%d] [%d] = ", i, j);
			scanf ("%d", &n[i][j]);
		}
	}
	system("cls");
	
	printf("\n\n******************* saída de dados ********************* \n\n");
	for (i=0; i<10; i++){
		for (j=0; j<12; j++){
			soma += n[i][j];
			printf ("[%d] [%d] = %d\n", i, j, n[i][j]);
		}
	}
	
	printf("\n\n******************* Soma dos elementos da matriz ********************* \n\n");
	printf ("SOMA = %d\n", soma);
		
	
	system ("Pause");
	return 0;
}
