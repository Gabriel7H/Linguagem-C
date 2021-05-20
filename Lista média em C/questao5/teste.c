#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dep, dias;
	float horas_trab, hora, valor_hora, sal_bru, sal_liq;
	printf ("Quantos dependentes?: ");
	scanf ("%d", &dep);
	printf ("\n Qual valor da sua hora de trabalho(valor-hora): ");
	scanf ("%f", &valor_hora);
	printf ("\n Quantas dias voce trabalha por mes : ");
	scanf ("%d", &dias);
	printf ("\n Quantas horas por dia voce trabalha: ");
	scanf ("%f", &hora);
	horas_trab = dias * hora;
	dep = dep * 300;
	sal_bru = (horas_trab * valor_hora) + dep;
    sal_liq = (horas_trab * valor_hora);
    printf ("Seu salario bruto e de R$: %.2f \n", sal_bru);
    printf ("Seu salario liquido e de R$: %.2f \n", sal_liq);
    system ("PAUSE");
	return 0;
}

