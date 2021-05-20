#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float peso, pgrama;
	setlocale(LC_ALL, "Portuguese");
	printf ("Peso atual(kg): ");
	scanf ("%f", &peso);
	pgrama = peso * 1000;
	printf ("O peso em gramas é: %.2f \n", pgrama);
	system ("PAUSE");
	return 0;
}
