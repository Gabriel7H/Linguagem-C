#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int j, i, n[5][5];
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("Elemento [%d] [%d] = ", i, j);
			scanf ("%d", &n[i][j]);
		}
	}
	
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf ("[%d] [%d] = %d\n", i, j, n[i][j]);
		}
	}
	
	
	
	system ("Pause");
	return 0;
}
