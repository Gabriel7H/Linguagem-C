#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float area, raio, compri, pi=3.14, vol;
	setlocale(LC_ALL, "Portuguese");
	printf("------------ESFERA----------------\n");
	printf("O valor do raio da esfera é: ");
	scanf("%f", &raio);
	compri = 2 * pi * raio;
	printf("O valor do comrpimento da esfera é: %.2f \n", compri);
	printf("--------------------------------------------------\n");
	area = pi * pow(raio,2);
	printf("O valor da área da esfera é: %.2f \n", area);
	printf("--------------------------------------------------\n");
	vol = (4 * pi * pow(raio,3)) /3;
	printf("O valor do volume da esfera é: %.2f \n", vol);


	return 0;
}
