#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dia, mes, ano, dia2, mes2, ano2;
	
	printf ("PRIMEIRA DATA \n");
	printf ("Digite o dia: ");
	scanf ("%d", &dia);
	printf ("Digite o mes: ");
	scanf ("%d", &mes);
	printf ("Digite o ano: ");
	scanf ("%d", &ano);
	
	printf ("SEGUNDA DATA \n");
	printf ("Digite o dia: ");
	scanf ("%d", &dia2);
	printf ("Digite o mes: ");
	scanf ("%d", &mes2);
	printf ("Digite o ano: ");
	scanf ("%d", &ano2);
	
	printf ("    EM ORDEM CRESCENTE FICA \n");
	
	if (ano > ano2)
	{
		printf ("DATA 1: %d/%d/%d \n", dia2, mes2, ano2);
		printf ("DATA 2: %d/%d/%d \n", dia, mes, ano);
	} else {
		if ((ano < ano2) || (ano == ano2 && mes == mes2 && dia < dia2))
		{
			printf ("DATA 1: %d/%d/%d \n", dia, mes, ano);
			printf ("DATA 2: %d/%d/%d \n", dia2, mes2, ano2);
		}
	}
	
	if (ano == ano2)
		if (mes > mes2)
		{
			printf ("DATA 1: %d/%d/%d \n", dia2, mes2, ano2);
			printf ("DATA 2: %d/%d/%d \n", dia, mes, ano);
		} else {
			if (ano == ano2 && mes < mes2)
			{
				printf ("DATA 1: %d/%d/%d \n", dia, mes, ano);
				printf ("DATA 2: %d/%d/%d \n", dia2, mes2, ano2);
			} else {
				if (ano == ano2 && mes == mes2 && dia > dia2)
				{
					printf ("DATA 1: %d/%d/%d \n", dia2, mes2, ano2);
					printf ("DATA 2: %d/%d/%d \n", dia, mes, ano);
				}
			}
		}
	
	
	
	
	
	system ("PAUSE");
	return 0;
}
