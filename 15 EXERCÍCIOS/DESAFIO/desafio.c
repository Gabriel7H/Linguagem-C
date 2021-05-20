#include <stdio.h>
#include <string.h> 
#include <conio.h>
int main (void)
{
  float N1, N2, N3, N4, media;
  printf (" Digite a primeira nota: ");
  scanf ("%f", &N1);
  printf (" Digite a segunda nota: ");
  scanf ("%f", &N2);
  printf (" Digite a terceira nota: ");
  scanf ("%f", &N3);
  printf (" Digite a quarta nota: ");
  scanf ("%f", &N4);
  media = (N1+N2+N3+N4) / 4;
  	if (media >= 5);
  		{	printf (" Aluno aprovado com a media : %.2f \n", media);
  			printf ("Parabens");
		  }
  	else
  		printf (" Aluno reprovado com a media : %.2f", media);
  	
  
}
