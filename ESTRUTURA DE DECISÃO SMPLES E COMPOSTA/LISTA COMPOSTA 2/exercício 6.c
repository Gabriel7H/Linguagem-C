#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	char sex[10];
	setlocale (LC_ALL, "Portuguese");
	printf ("Qual o seu sexo: ");
	scanf ("%s", &sex);
	
	if (strcmp (sex, "M")==0 || strcmp (sex, "m")==0)
	{
		printf ("Seja bem-vindo, senhor! \n");
		
	}
	else
	{
		if (strcmp (sex, "F")==0 || strcmp (sex, "f")==0)
		{
				printf ("Seja bem-vinda, senhora! \n");
		}
	}
	system ("PAUSE");
}
