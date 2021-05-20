#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	int idade;
	
	printf ("Qual a idade do nadador?: ");
	scanf ("%d", &idade);
	
	if ((idade >= 5) && (idade <= 7))
	{
		printf ("Categoria: Infantil A \n");
	} 
		else {
			if ((idade >= 8) && (idade <= 10))
			{
				printf ("Categoria: Infantil B \n");
			}
				else{
					if ((idade >= 11) && (idade <= 13))
					{
						printf ("Categoria: Juvenil A \n");
					}
						else{
							if ((idade >= 14) && (idade <= 17))
							{
								printf ("Categoria: Juvenil B \n");
							}
								else {
									if (idade >= 18)
									{
										printf ("Categoria: Senior \n");	
									}
										else {
											if (idade < 5)
											{
												printf ("Essa idade não possuí categoria \n");
											}
										}
								}
						}
				}
		}	
			
	system ("PAUSE");
	return 0;
}
