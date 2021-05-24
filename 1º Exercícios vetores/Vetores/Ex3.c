#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>



int main(int argc, char *argv[]) {
	int A[10], B[10], i, e, qpara=0, qimpara=0, qparb=0, qimparb=0;
	setlocale (LC_ALL, "Portuguese");
	
	for (i=0; i < 10; i++){
		printf ("Digite o %dº numero de A: ", i+1);
		scanf ("%d", &A[i]);
		if (A[i]%2==0)
			qpara ++;
		else {
			qimpara++;
		}
	}
	printf ("================================================\n");
	for (e=0; e < 10; e++){
		printf ("Digite o %dº numero de B: ", e+1);
		scanf ("%d", &B[e]);
		if (B[e]%2==0)
			qparb ++;
		else {
			qimparb++;
		}	
	}
	printf ("================================================\n");
	printf ("QUANTIDADE DE NÚMEROS PARES \n");
	printf ("Vetor A: %d \n", qpara);
	printf ("Vetor B: %d \n", qparb);
	printf ("QUANTIDADE DE NÚMEROS ÍMPARES \n");
	printf ("Vetor A: %d \n", qimpara);
	printf ("Vetor B: %d \n", qimparb);
	
	system("Pause");
	return 0;
}
