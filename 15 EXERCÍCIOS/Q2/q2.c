#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, resul;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite um número: ");
	scanf ("%d", &n1);
	printf ("Digite um número: ");
	scanf ("%d", &n2);
	printf ("Digite um número: ");
	scanf ("%d", &n3);
	resul = n1 * n2 * n3;
	printf ("A multiplicação dos três números é: %d \n", resul);
	system ("PAUSE");
	return 0;
}
