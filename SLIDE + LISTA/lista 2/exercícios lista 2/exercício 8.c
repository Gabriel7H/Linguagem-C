#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int tot, exc; 
	float multa;
	setlocale (LC_ALL, "Portuguese");
	printf ("Qual a quantidade de peixe pescado em Kg: ");
	scanf ("%d", &tot);
	
	if (tot <= 50)
	{
		printf ("PARAB�NS! Voc� est� dentro da lei.");
	}
	else
	if (tot > 50)
	{
		exc = tot - 50;
		multa = exc * 4;
		printf ("Voc� est� infringindo a lei \n");
		printf ("A multa ser� de :R$ %.2f \n ", multa);

	}
	system ("PAUSE");
}
