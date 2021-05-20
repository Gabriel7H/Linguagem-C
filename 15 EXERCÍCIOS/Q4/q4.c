#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float n1, n2, mp;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite a primeira nota: ");
	scanf ("%f", &n1);
	printf ("Digite a segunda nota: ");
	scanf ("%f", &n2);
	mp = ((n1 * 2) + (n2 * 3)) / (2 + 3);
	printf ("A média ponderada das notas é: %.2f \n", mp);
	system ("PAUSE");
	return 0;
}
