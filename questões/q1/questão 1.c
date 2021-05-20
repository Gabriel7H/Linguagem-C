#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	float hora;
	
	printf ("Hora de início do turno de trabalho: ");
	scanf ("%f", &hora);
	
	if ((hora >= 5) && (hora < 12.59))
		printf ("  Manhã \n");
		else 
			if ((hora >= 13) && (hora <= 20.59))
				printf ("  Tarde \n");
			else 
				if ((hora >= 21) && (hora <= 23))
					printf ("  Noite \n");
				
				
	system ("PAUSE");
	return 0;
}
