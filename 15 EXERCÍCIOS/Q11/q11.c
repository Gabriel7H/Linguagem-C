#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float dmaior, dmenor, area;
	setlocale(LC_ALL, "Portuguese");
	printf ("�REA DO LOSANGO \n");
	printf ("diagonal maior: ");
	scanf ("%f", &dmaior);
	printf ("diagonal menor: ");
	scanf ("%f", &dmenor);
	area = (dmaior + dmenor) / 2; 
	printf ("A �rea do losango �: %.2f \n", area);
	system ("PAUSE");
	return 0;
}
