#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float b, a, area;
	printf ("Digite um valor para base do triangulo: ");
	scanf ("%f", &b);
	printf ("Digite um valor para a altura do triangulo: ");
	scanf ("%f", &a);
	area = (b * a) / 2;
	printf ("A area do triangulo eh de: %.1f \n ", area);
	system ("pause");
	
	return 0;
}
