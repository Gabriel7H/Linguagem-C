#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int id, M, D;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite a sua idade em anos: ");
	scanf ("%d", &id);
	M = id * 12;
	D = 365 * id;
	printf ("ANOS: %d \n", id);
	printf ("MESES: %d \n", M);
	printf ("DIAS: %d \n", D);
	system ("PAUSE");
}
