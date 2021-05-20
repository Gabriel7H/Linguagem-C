#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x, n, result;
	printf ("Digite um valor para x: ");
	scanf ("%f", &x);
	printf ("Digite um valor para n: ");
	scanf ("%f", &n);
	result = (x * n) * (x * n);
	printf ("O resultado de (x*n) elevado a dois eh igual %.1f \n: ", result);
	system ("pause");
	return 0;
}
