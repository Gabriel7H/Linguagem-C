#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	float n1, n2;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um valor: ");
	scanf ("%f", &n1);
	printf ("Digite outro valor: ");
	scanf ("%f", &n2);
	if (n1 > n2)
	{
		printf ("O maior valor é : %.2f ", n1);
		printf ("e o menor valor é : %.2f \n ", n2);
	}
	else
	{
		printf ("O maior valor é : %.2f ", n2);
		printf ("e o menor valor é : %.2f \n ", n1);

	}
	system ("PAUSE");
}
