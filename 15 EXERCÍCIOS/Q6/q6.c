#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float sal, ven, mp, comi, sal_final;
	setlocale(LC_ALL, "Portuguese");
	printf ("Sal�rio do funcion�rio: ");
	scanf ("%f", &sal);
	printf ("Valor das vendas: ");
	scanf ("%f", &ven);
	comi = ven * 0.04;
	sal_final = comi + sal;
	printf ("A comiss�o �: R$ %.2f \n", comi);
	printf ("O sal�rio final �: R$ %.2f \n", sal_final);
	system ("PAUSE");
	return 0;
}
