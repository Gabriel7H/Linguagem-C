#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int idade;
	
	printf ("Digite um idade: ");
	scanf ("%d", &idade);
	
	if (idade >= 10 && idade <=18)
	{
		printf ("A idade está no intervalo entre 10 e 18 anos. \n");
	}
		else {
			printf ("A idade não está entre 10 e 18 anos. \n");
		}	
				
	system ("PAUSE");
	return 0;
}
