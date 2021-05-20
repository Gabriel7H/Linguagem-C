#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int val;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um valor: ");
	scanf ("%d", &val);
	
	if (val % 5 == 0)
	{
		printf ("O número é múltiplo de 5. \n");
	}
	else
	{
		printf ("O número não é múltiplo de 5. \n");
	}
	system ("PAUSE");
}
