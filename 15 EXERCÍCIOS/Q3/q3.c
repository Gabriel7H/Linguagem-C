#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, div;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite um n�mero: ");
	scanf ("%d", &n1);
	printf ("Digite um n�mero inteiro maior que 0: ");
	scanf ("%d", &n2);
	div = n1 / n2;
	printf ("A divis�o dos dois n�meros �: %d \n", div);
	system ("PAUSE");
	return 0;
}
