#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int s, f=0, m=0, res=1;
	float alt, maior, menor=99999999, altm, alth, mediam, per, tot;
	
	do {
		printf ("SEXO [1 = homem / 2 = mulher]:");
		scanf ("%d", &s);
		printf ("ALTURA: ");
		scanf ("%f", &alt);
		
		if (s == 1)
		{
			m ++;
			alth += alt;
	
		} 
		else 
		{
			if (s == 2)
			{
				f ++;
				altm += alt;
			}
		}
		
		if (alt > maior) {
			maior = alt;
		}
		if (alt < menor) {
			menor = alt;
		}	
	
		
		printf ("Pressione 1 para continuar ou 0 para parar: ");
		scanf ("%d", &res); 
		
	} while (res != 0);
	
	mediam = altm / f;
	tot = m + f;
	if (m > f)
	{
		per = ((m - f)/ tot) * 100;
	} else {
		if (m < f) 
		{
			per = ((f - m)/tot) * 100;
		}
	}
	
	setlocale (LC_ALL, "Portuguese");
	printf ("A menor altura � de = %.2f \n", menor);
	printf ("A maior altura � de = %.2f \n", maior);
	printf ("M�dia da altura das mulheres = %.2f \n", mediam);
	printf ("O total de homens � %d e a diferen�a percentual destes em rela��o as mulheres � de %.2f por cento \n", m, per); 
	
	system ("PAUSE");
	return 0;
}
