#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int n1;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um valor: ");
	scanf ("%d", &n1);
	
	if (n1 % 2 == 0)
	{
		printf ("O valor � par. \n");
		
	}
	else
	{
		printf ("O valor � �mpar. \n");

	}
	system ("PAUSE");
	return 0;
}
