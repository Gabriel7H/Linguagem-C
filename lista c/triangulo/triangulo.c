#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float base, altura, area;
	printf ("\n Digite a base do triangulo: ");
	scanf ("%f", &base);
	printf ("\n Digite a altura do triangulo: ");
	scanf ("%f", &altura);
	area=(base * altura)/2;
	printf ("A area do triangulo eh = %.1f \n", area);
	system ("PAUSE");
	return 0;
}
