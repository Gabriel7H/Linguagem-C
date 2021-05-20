#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	printf("---NUMEROS IMPARES DE 1 A 100---\n");
	
	for (i=1; i < 100; i+=2){
		printf (" %d ", i);
		
	}
		
	system ("PAUSE");
	return 0;
}
