#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int salmin, salf, quansal;
	setlocale(LC_ALL, "Portuguese");
	printf ("Salário mínimo: ");
	scanf ("%d", &salmin);
	printf ("Salário funcionário: ");
	scanf ("%d", &salf);
	quansal = salf / salmin; 
	printf ("A quantidade de salário mínimo é: %d \n", quansal);
	system ("PAUSE");
	return 0;
}
