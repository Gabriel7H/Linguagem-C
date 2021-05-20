#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float dmaior, dmenor, area;
	setlocale(LC_ALL, "Portuguese");
	printf ("ÁREA DO LOSANGO \n");
	printf ("diagonal maior: ");
	scanf ("%f", &dmaior);
	printf ("diagonal menor: ");
	scanf ("%f", &dmenor);
	area = (dmaior + dmenor) / 2; 
	printf ("A área do losango é: %.2f \n", area);
	system ("PAUSE");
	return 0;
}
