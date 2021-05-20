#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int num;

	
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite um número de 1 a 12: ");
	scanf ("%d", &num);
	
	switch (num){
		case 1:
			printf (" JANEIRO \n");
			break;
		case 2:
			printf (" FEVEREIRO \n");
			break;
		case 3:
			printf (" MARÇO \n");
			break;
		case 4:
			printf (" ABRIL \n");
			break;
		case 5:
			printf (" MAIO \n");
			break;
		case 6:
			printf (" JUNHO \n");
			break;
		case 7:
			printf (" JULHO \n");
			break;
		case 8:
			printf (" Agosto \n");
			break;
		case 9:
			printf (" Setembro \n");
			break;
		case 10:
			printf (" Outubro \n");
			break;
		case 11:
			printf (" Novembro \n");
			break;
		case 12:
			printf (" Dezembro \n");
			break;
		default:
			printf ("Opção Inválida");
			break;		
	}
	system ("PAUSE");
	return 0;
}
