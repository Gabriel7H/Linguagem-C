#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int A[10], i, B[10];
	setlocale(LC_ALL, "Portuguese");
	for (i=1; i<11; i++){
		printf ("Digite o %dº numero: ", i);
		scanf ("%d", &A[i]);
		if (i%2==0)
		{
			B[i] = A[i] * 5;
			printf ("A: %d  B: %d \n", A[i], B[i]);
		} else {
			B[i] = A[i] + 5;
			printf ("A: %d  B: %d \n", A[i], B[i]);
		}
	}
	
	
	system("Pause");
	return 0;
}
