#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int base, altura, area;
	
	printf ("Digite a altura do retangulo: ");
	scanf("%d", &altura);
	printf ("Digite a base do retangulo: ");
	scanf("%d", &base);
	area = base * altura;
	printf (" A area do retanguo eh : %d \n", area);
	system ("pause");
	return 0;
}
