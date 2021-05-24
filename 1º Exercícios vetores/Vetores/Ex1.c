#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int elemento [10], i=0, c=0, e;
	setlocale (LC_ALL, "Portuguese");
	
	for (i=0; i<10; i++){
		printf ("Digite o %dº numero: ", i+1);
		scanf ("%d", &elemento[i]);			
	}
	e = 1;	
	do{
		printf ("%dº elemento: %d \n", e, elemento[c]);	
		c++;
		e++;
	}while (c < 10);

	
	
	system ("PAUSE");
	return 0;
}
