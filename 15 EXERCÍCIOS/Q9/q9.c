#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float bme, bma, area, alt;
	setlocale(LC_ALL, "Portuguese");
	printf ("Base maior trap�zio: ");
	scanf ("%f", &bma);
	printf ("Base menor trap�zio: ");
	scanf ("%f", &bme);
	printf ("Altura trap�zio: ");
	scanf ("%f", &alt);
	area = ((bme + bma) + alt) / 2;
	printf ("A �rea do trap�zio �: %.2f \n", area);
	system ("PAUSE");
	return 0;
}
