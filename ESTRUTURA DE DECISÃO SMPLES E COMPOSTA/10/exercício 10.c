#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int nasc, ano_atual, id;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite seu ano de nascimento: ");
	scanf ("%d", &nasc);
	printf ("Digite o ano atual: ");
	scanf ("%d", &ano_atual);
	id = ano_atual - nasc;
	
	if (id >= 18)
	{
		printf ("Você tem: %d ", id);
		printf (" anos e já atingiu a maioridade. \n");	
	}
	else
	{
		printf ("Você tem: %d ", id);
		printf (" anos e ainda não atingiu a maioridade. \n");	
	}
	
	system ("PAUSE");
	return 0;
}
