#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	float n1, n2, n3, mediapon;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite uma nota: ");
	scanf ("%f", &n1);
	printf ("Digite uma nota: ");
	scanf ("%f", &n2);
	printf ("Digite uma nota: ");
	scanf ("%f", &n3);
	mediapon = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
	printf ("A média ponderada é: %.2f \n", mediapon);
	system ("PAUSE");
}
