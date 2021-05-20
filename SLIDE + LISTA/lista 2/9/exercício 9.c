#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	char senha[10];
	
	printf ("Digite a senha correta: ");
	scanf ("%s", &senha);

	if (strcmp(senha,"asdfg") == 0)
	{
		printf ("SENHA CORRETA \n");	
	}
	else
	{
		printf ("SENHA INCORRETA");
	}
	
	system ("PAUSE");
}
