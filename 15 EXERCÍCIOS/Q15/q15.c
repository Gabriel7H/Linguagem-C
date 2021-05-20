#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float sal, conta1, conta2;
	setlocale(LC_ALL, "Portuguese");
	printf ("Salário do João: ");
	scanf ("%f", &sal);
	printf ("primeira conta: ");
	scanf ("%f", &conta1);
	printf ("segunda conta: ");
	scanf ("%f", &conta2);
	conta1 = conta1 + (conta1 * 0.02);
	conta2 = conta2 + (conta2 * 0.02);
	sal = sal - (conta1 + conta2);
	printf ("Após pagar as duas contas atrasadas restará do salário: R$ %.2f \n", sal);
	system ("PAUSE");
	return 0;
}
