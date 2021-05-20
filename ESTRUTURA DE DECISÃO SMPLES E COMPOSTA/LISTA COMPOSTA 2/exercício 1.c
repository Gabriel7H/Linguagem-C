#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x, y;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um valor: ");
	scanf ("%f", &x);
	printf ("Digite outro valor: ");
	scanf ("%f", &y);
	if (x == y)
	{
		printf ("Os números digitados são iguais! \n");
	}
	else
	{
		printf ("Os números digitados não são iguais! \n");
	}
	system ("PAUSE");
	return 0;
}
