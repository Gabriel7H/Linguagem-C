#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	float nota, media, s;
	int c, i;
	
	printf ("Quantas notas vai inserir? ");
		scanf ("%d", &i);
	for (c = 1; c <= i; c++)
	{
		printf ("Digite a %d", c);
		printf ("ª nota: ");
		scanf ("%f", &nota);
		s += nota;
	}
	
	media = s/i;
	
		if (media >= 9)
		{
			printf ("Aluno tirou A! \n");
		}
			else
			{
				if (media >= 7 && media <= 8.9)	
				{
					printf ("Aluno tirou B! \n");
				}
					else
					{
						if (media >= 5 && media <= 6.9)
						{
							printf ("Aluno tirou C! \n");
						}
							else
							{
								if (media >= 2.5 && media <= 4.9)
								{
									printf ("Aluno tirou D! \n");
								}
									else
									{
										if (media < 2.5)
										{
											printf ("Aluno tirou E! \n");
										}
									}
							}
					}
			}
			
		
	system ("PAUSE");
	return 0;
}
