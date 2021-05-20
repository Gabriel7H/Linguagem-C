#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	float peso, IMC, alt;
	
	printf (" ALTURA: ");
	scanf ("%f", &alt);
	printf (" PESO: ");
	scanf ("%f", &peso);
	
	setlocale (LC_ALL, "Portuguese");
	IMC = peso /( pow(alt, 2));
	
	if (IMC < 18)
	{
		printf ("IMC: %.2f \n", IMC);
		printf ("Magreza \n");	
	}
		else {
			if (IMC > 18 && IMC <= 24.9)
			{
				printf ("IMC: %.2f \n", IMC);
				printf ("Saudável \n");	
			}
				else {
					if (IMC > 25 && IMC <= 29.9)
					{
						printf ("IMC: %.2f \n", IMC);
						printf ("Sobrepeso \n");	
					}
						else {
							if (IMC >= 30)
							{
								printf ("IMC: %.2f \n", IMC);
								printf ("Obesidade \n");	
							}
						}
				}
					
		}		
	
	system ("PAUSE");
	return 0;
}
