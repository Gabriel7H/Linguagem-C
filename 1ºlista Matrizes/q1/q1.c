#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	//1 - quantidade de strins 2- comprimento das strings
	char nome [4] [20];
	float notas[4] [4], media[3], soma[3];
	
	int i, j;
	
	for (i=0; i<4; i++){
		printf ("Nome do aluno %d: ", i+1);
		scanf ("%s", &nome[i]);
		
		printf ("Digite as quatro notas do aluno %d \n", i+1);
		for (j=0; j<4; j++){
			printf ("Nota %d: ", j+1);
			scanf ("%f", &notas[j][j]);
			soma[i] += notas[j][j];
		}
		
		media[i]=soma[i]/4;
		system ("cls");
	}
	
	printf ("Aluno: %s \n", nome[0]);
	printf ("Media: %.2f \n", media[0]);
	printf ("------------------------------------------\n");
	printf ("Aluno: %s \n", nome[1]);
	printf ("Media: %.2f \n", media[1]);
	printf ("------------------------------------------\n");
	printf ("Aluno: %s \n", nome[2]);
	printf ("Media: %.2f \n", media[2]);
	printf ("------------------------------------------\n");
	printf ("Aluno: %s \n", nome[3]);
	printf ("Media: %.2f \n", media[3]);
	
	system ("Pause");
	return 0;
}
