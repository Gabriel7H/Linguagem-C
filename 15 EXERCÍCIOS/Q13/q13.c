#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	int num, resu;
	setlocale(LC_ALL, "Portuguese");
	printf ("TABUADA \n");
	printf ("Qual tabuada: ");
	scanf("%d", &num);
	resu = num * 0;
	printf ("0 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 1;
	printf ("1 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 2;
	printf ("2 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 3;
	printf ("3 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 4;
	printf ("4 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 5;
	printf ("5 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 6;
	printf ("6 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 7;
	printf ("7 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 8;
	printf ("8 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 9;
	printf ("9 x %d", num);
	printf ("= %d \n", resu);
	resu = num * 10;
	printf ("10 x %d", num);
	printf ("= %d \n", resu);
	system ("PAUSE");
	return 0;
}
