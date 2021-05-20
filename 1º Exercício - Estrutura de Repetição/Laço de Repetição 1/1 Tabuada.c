#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int c, f, tab, r;
	
	setlocale (LC_ALL, "Portuguese");
	printf ("Qual tabuada deseja saber? ");
	scanf ("%d", &tab);
	printf ("Até qual valor: ");
	scanf ("%d", &f);
	
	for (c = 0; c <= f; c++) {
		r = tab * c;
		printf("\n %d X %d = %d \n",tab, c, r);
	}
	
	system ("PAUSE");
	return 0;
}
