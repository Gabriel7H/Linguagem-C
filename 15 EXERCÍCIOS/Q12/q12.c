#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int salmin, salf, quansal;
	setlocale(LC_ALL, "Portuguese");
	printf ("Sal�rio m�nimo: ");
	scanf ("%d", &salmin);
	printf ("Sal�rio funcion�rio: ");
	scanf ("%d", &salf);
	quansal = salf / salmin; 
	printf ("A quantidade de sal�rio m�nimo �: %d \n", quansal);
	system ("PAUSE");
	return 0;
}
