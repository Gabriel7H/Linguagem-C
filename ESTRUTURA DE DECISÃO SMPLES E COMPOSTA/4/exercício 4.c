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
	
	if (val < 0 )
	{
		printf ("O valor � negativo. \n");	
	}
	else
	{
		printf ("O valor � positivo. \n");
	}
	system ("PAUSE");
}
