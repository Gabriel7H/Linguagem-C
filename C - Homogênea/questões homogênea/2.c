#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	float n1, n2, r;
	int opcao;
	
	printf (" CALCULADORA: \n");
	printf (" 1-Somar \n 2-Subtrair \n 3-Multiplicar \n 4-Dividir \n\n");
	printf ("Qual op��o deseja? ");
		scanf ("%d", &opcao);
	printf ("Digite um n�mero: ");
		scanf ("%f", &n1);
	printf ("Digite outro n�mero: ");
		scanf ("%f", &n2);
	
	switch (opcao){
	
		case 1:
			r = n1 + n2;
			printf ("A soma �: %.2f \n", r);
			break;
		case 2:
			r = n1 - n2;
			printf ("A subtra��o �: %.2f \n", r);
			break;	
		case 3:
			r = n1 * n2;
			printf ("A multiplica��o �: %.2f \n", r);
			break;
		case 4:
			r = n1 / n2;
			printf ("A soma �: %.2f \n", r);
			break;
		default:
			printf ("Valor Inv�lido!");
	}
	system ("PAUSE");
	return 0;
}
