#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float c=500, i=0.01, t=3, j, m;
	printf ("Seu deposito e de R$ 500");
	
	j = c * i * t;
	m = c + j;
	
	printf ("\n A sua poupança após 3 meses e de : %.2f \n", m);
	system ("PAUSE");
	return 0;
}
