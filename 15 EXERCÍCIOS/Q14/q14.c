#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int nasc, atual, ida, idm, idd, ids;
	setlocale(LC_ALL, "Portuguese");
	printf ("Ano de nascimento: ");
	scanf ("%d", &nasc);
	printf ("Ano atual: ");
	scanf("%d", &atual);
	ida = atual - nasc;
	printf ("A idade em anos �: %d \n", ida);
	idm = ida * 12;
	printf ("A idade em meses �: %d \n", idm);
	idd = ida * 365;
	printf ("A idade em dias �: %d \n", idd);
	ids = ida * 52.143; 
	printf ("A idade em semanas �: %d \n", ids);
	system ("PAUSE");
	return 0;
}
