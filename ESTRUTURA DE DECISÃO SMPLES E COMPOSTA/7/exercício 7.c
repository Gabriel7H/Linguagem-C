#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	float X, Y, Z;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um valor para x: ");
	scanf ("%f", &X);
	printf ("Digite outro valor para y: ");
	scanf ("%f", &Y);
	printf ("Digite outro valor para z: ");
	scanf ("%f", &Z);
	if ((Z > X) && (Z < Y))
	{
		printf (" O valor %.2f ", Z);
		printf (" está dentro do intervalo entre os valores X e Z. \n");
	}
	else
	{
		printf (" O valor %.2f ", Z);
		printf (" NÃO está dentro do intervalo entre os valores X e Z. \n");

	}
	system ("PAUSE");
}
