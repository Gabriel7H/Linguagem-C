#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dif, nasc, ano, idade, idade_fut;
	
	printf ("Em que ano nos estamos: ");
	scanf ("%d", &ano);
	printf ("Em que ano voce nasceu?: ");
	scanf ("%d", &nasc);
	idade = ano - nasc;
	dif = 2050 - ano;
	idade_fut = idade + dif;
	printf (" Voce em 2050 vai ter: %d \n", idade_fut);
	system ("pause");
	return 0;
}
