#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, s;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite o primeiro n�mero: ");
	scanf ("%f", &n1);
	printf ("Digite o segundo n�mero: ");
	scanf ("%f", &n2);
	s = n1 + n2;
	if (s > 25)
	{
		printf ("A soma � maior que 25. \n");
	} 
	else
	{
		printf ("A soma � menor que 25. \n");			
	}
	system ("PAUSE");	
	return 0;
}
