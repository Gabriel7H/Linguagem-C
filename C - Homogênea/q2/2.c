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
	printf ("Qual opção deseja? ");
		scanf ("%d", &opcao);
	printf ("Digite um número: ");
		scanf ("%f", &n1);
	printf ("Digite outro número: ");
		scanf ("%f", &n2);
	
	switch (opcao){
	
		case 1:
			r = n1 + n2;
			printf ("A soma é: %.2f \n", r);
			break;
		case 2:
			r = n1 - n2;
			printf ("A subtração é: %.2f \n", r);
			break;	
		case 3:
			r = n1 * n2;
			printf ("A multiplicação é: %.2f \n", r);
			break;
		case 4:
			r = n1 / n2;
			printf ("A soma é: %.2f \n", r);
			break;
		default:
			printf ("Valor Inválido!");
	}
	system ("PAUSE");
	return 0;
}
