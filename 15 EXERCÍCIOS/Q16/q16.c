#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float cat1, cat2, h;
	setlocale(LC_ALL, "Portuguese");
	printf ("TRIÂNGULO RETÂNGULO HIPUTENUSA \n");
	printf ("cateto 1: ");
	scanf ("%f", &cat1);
	printf ("cateto 2: ");
	scanf ("%f", &cat2);
	h = pow(cat1, 2) + pow(cat2, 2); 
	h = sqrt(h);
	printf ("A hipotenusa é: %.2f \n", h);
	system ("PAUSE");
	return 0;
}
