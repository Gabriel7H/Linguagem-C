#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float vel_media, temp, dist, litros;
	printf ("\n Digite a velocidade media (km): ");
	scanf ("%f", &vel_media);
	printf ("\n Digite o tempo de viagem (horas): ");
	scanf ("%f", &temp);
	dist = vel_media * temp;
	litros = dist / 12;
	printf ("A velocidade media eh : %.1f \n", vel_media);
	printf ("O tempo gasto foi de : %.1f \n", temp, " horas.");
	printf ("A distancia percorrida foi : %.1f \n", dist, " km.");
	printf ("A quantidade de litros de gasolina eh : %.1f \n", litros, " litros.");
	system ("PAUSE");
	return 0;
}

