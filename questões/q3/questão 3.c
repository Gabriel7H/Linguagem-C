#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int op;
	
	printf ("	Escolha uma opção de lanche do MacDonalds: \n");
	printf (" -1 \n -2 \n -3 \n -4 \n -5 \n");
	printf ("Qual opção? ");
	scanf ("%d", &op);
	switch (op) {
		case 1 :
			printf (" BigMac \n");
			break;
		case 2 :
			printf (" Quarteirão \n");
			break;
		case 3 :
			printf (" MacChicken \n");
			break;
		case 4 :
			printf (" Cheddar MacMelt \n");
			break;
		case 5 :
			printf (" MacMax \n");
			break;
		default:
			printf (" Opção Inválida! \n");
			break;			
	}		
	system ("PAUSE");
	return 0;
}
