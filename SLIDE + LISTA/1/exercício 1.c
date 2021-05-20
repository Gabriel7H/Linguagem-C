#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    float A, B, C, D, x1, x2;
    printf("Selecione o valor de A: ");
    scanf("%f",&A);
    printf("Selecione o valor de B: ");
    scanf("%f",&B);
    printf("Selecione o valor de C: ");
    scanf ("%f",&C);
    D = pow (B,2) - 4 * A * C;

    if (D <0)
    {
   		printf ("O resultado não terá valor real pois delta é negativo.\n");
	}
    else
	{	x1 = ((-B + (sqrt(D))) / (2 * A));
    	x2 = ((-B - (sqrt(D))) / (2 * A));
		printf ("O valor de x1 é: %.2f\n",x1);
    	printf ("O valor de x2 é: %.2f\n",x2);
	}
    	
    system ("PAUSE");
	return 0;
}
