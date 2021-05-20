#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, sub;
	setlocale(LC_ALL, "Portuguese");
	printf ("Digite um número: ");
	scanf ("%d", &n1);
	printf ("Digite um número: ");
	scanf ("%d", &n2);
	sub = n1 - n2;
	printf ("A subtração dos dois números é: %d \n", sub );
	system ("PAUSE");
	return 0;
}
