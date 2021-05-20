#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float peso, peso15, peso20;
	setlocale(LC_ALL, "Portuguese");
	printf ("Peso atual(kg): ");
	scanf ("%f", &peso);
	peso15 = peso + (peso * 0.15);
	peso20 = peso - (peso * 0.20);
	printf ("O peso depois de engordar 15 por cento é(kg)): %.2f \n", peso15);
	printf ("O peso depois de emagrecer 20 por cento é(kg)): %.2f \n", peso20);
	system ("PAUSE");
	return 0;
}
