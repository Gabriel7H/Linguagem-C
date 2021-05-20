#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float num1, num2, num3, num4, media;
	printf ("Digite a primeira nota: ");
	scanf ("%f", &num1);
	printf ("\n Digite a segunda nota: ");
	scanf ("%f", &num2);
	printf ("\n Digite a terceira nota: ");
	scanf ("%f", &num3);
	printf ("\n Digite a quarta nota: ");
	scanf ("%f", &num4);
	media = (num1 + num2 + num3 + num4) / 4;
	printf("Media do aluno : %.1f \n",media);
	system (" PAUSE");
	return 0;
}
