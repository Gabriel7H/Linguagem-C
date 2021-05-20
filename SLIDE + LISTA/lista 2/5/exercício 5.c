#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	float n1, n2, dif;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um valor: ");
	scanf ("%f", &n1);
	printf ("Digite outro valor: ");
	scanf ("%f", &n2);
	if (n1 > n2)
	{
		dif = n1 -n2;
		printf ("A diferença do maior pelo o menor é: %.2f \n", dif);
	
	}
	else
	{
		dif = n2 -n1;
		printf ("A diferença do maior pelo o menor é: %.2f \n", dif);

	}
	system ("PAUSE");
}
