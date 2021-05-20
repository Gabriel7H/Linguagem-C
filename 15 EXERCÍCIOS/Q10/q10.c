#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float lado, area;
	setlocale(LC_ALL, "Portuguese");
	printf ("Lado do quadrado: ");
	scanf ("%f", &lado);
	area = lado * lado;
	printf ("A área do quadrado é: %.2f \n", area);
	system ("PAUSE");
	return 0;
}
