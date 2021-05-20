#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float bme, bma, area, alt;
	setlocale(LC_ALL, "Portuguese");
	printf ("Base maior trapézio: ");
	scanf ("%f", &bma);
	printf ("Base menor trapézio: ");
	scanf ("%f", &bme);
	printf ("Altura trapézio: ");
	scanf ("%f", &alt);
	area = ((bme + bma) + alt) / 2;
	printf ("A área do trapézio é: %.2f \n", area);
	system ("PAUSE");
	return 0;
}
