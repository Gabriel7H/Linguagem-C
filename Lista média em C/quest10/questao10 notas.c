#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, n5, n6, m;
	char nome;
	
	printf ("Nome do aluno: ");
      scanf ("%s", &nome);
    printf ("NOTA 1 bimestre: ");
      scanf ("%f", &n1);
    printf ("NOTA 2 bimestre: ");
      scanf ("%f", &n2);
    printf ("NOTA 3 bimestre: ");
      scanf ("%f", &n3);
    printf ("NOTA 4 bimestre: ");
      scanf ("%f", &n4);
    printf ("NOTA 5 bimestre: ");
      scanf ("%f", &n5);
	printf ("NOTA 6 bimestre: ");
      scanf ("%f", &n6);
    m = (n1 + n2 + n3 + n4 + n5 + n6) / 6;
    printf ("A média anual foi de: %.1f \n", m);
    system("pause");
	return 0;
}
