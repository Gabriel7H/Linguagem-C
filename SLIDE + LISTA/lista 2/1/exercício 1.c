#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soma, n, media;
	int c = 0;
	
	setlocale (LC_ALL, "Portuguese");
	while (c != 4){
		printf ("Digite a nota do bimestre: ");
		scanf ("%f", &n);
		c += 1;
		soma += n;
	}
	
	media = soma /4;
	if (media >= 7)
	{
		printf ("Média: %.2f \n", media);
		printf ("Parabéns, aluno aprovado! \n");
	}
	else
	{
		printf ("Média: %.2f \n", media);
		printf ("Aluno Reprovado. \n");
	}
	
	system ("PAUSE");
	return 0;
}
