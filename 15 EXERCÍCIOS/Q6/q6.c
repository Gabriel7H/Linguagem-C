#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float sal, ven, mp, comi, sal_final;
	setlocale(LC_ALL, "Portuguese");
	printf ("Salário do funcionário: ");
	scanf ("%f", &sal);
	printf ("Valor das vendas: ");
	scanf ("%f", &ven);
	comi = ven * 0.04;
	sal_final = comi + sal;
	printf ("A comissão é: R$ %.2f \n", comi);
	printf ("O salário final é: R$ %.2f \n", sal_final);
	system ("PAUSE");
	return 0;
}
