#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float ideal1, ideal2, altura;
	char sexo[10];
	
	printf ("ALTURA: ");
	scanf ("%f", &altura);
	printf ("SEXO: ");
	scanf ("%s", &sexo);
	
	if (strcmp(sexo,"M")==0 ||strcmp(sexo,"m")==0){
	ideal1 = (72.7 * altura) -58;
	printf("PESO = %.2f\n", ideal1);
	}
	
	else if (strcmp(sexo,"F") == 0 || strcmp(sexo,"f")== 0){
	ideal2 = (62.1 * altura) - 44.7;
	printf("PESO = %.2f\n", ideal2);
	}	
	system ("PAUSE");
	return 0;
}
