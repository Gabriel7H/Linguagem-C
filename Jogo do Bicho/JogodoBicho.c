#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	int res, res1;
	
	setlocale (LC_ALL, "Portuguese");

	do{
		printf ("====================================================\n");
		printf ("                  QUAL � O ANIMAL? \n");
		printf ("====================================================\n");
		printf (" ATEN��O : Responda as perguntas com 1=sim ou 2=n�o \n");
		printf ("====================================================\n");
		printf ("    � mam�fero? ");
		scanf ("%d", &res);
		switch (res){
		case 1: 
			printf ("    � quadr�pede? ");
			scanf ("%d", &res);
			switch (res){
			case 1:
			 	printf ("    � carn�voro? ");
			 	scanf ("%d", &res);
			 	switch (res){
			 	case 1:
					printf ("    Seu animal � o Le�o! \n");
				break;			
				case 2:
					printf ("    Seu animal � o Cavalo! \n");
				break;
				}
			break;
			case 2:
				printf ("    � carn�voro? ");
				scanf ("%d", &res);
				switch (res){
					case 1:
						printf ("    Seu animal � a baleia! \n");
					break;
					case 2:
						printf ("    � Voador? ");
						scanf ("%d", &res);
						switch (res){
							case 1:
								printf ("    Seu animal � o morcego! \n");
							break;
							case 2:
								printf ("    Vive geralmente na floresta? ");
								scanf ("%d", &res);
								switch (res){
									case 1:
										printf ("    Seu animal � o macaco \n");
									break;
									case 2:
										printf ("    O animal � o Homem \n"); 
									break;
								}
						}  break;
					break;
				}	
			break;
			}
		break;
		case 2:
			printf ("    � quadrupede? ");
			scanf ("%d", &res);
			switch (res){
				case 1:
					printf ("    � carn�voro? ");
					scanf ("%d", &res);
					switch (res){
						case 1:
							printf ("    Seu animal � o crocodilo \n");
						break;
						case 2:
							printf ("    Seu animal � a tartaruga \n");
						break;
					}
				break;
				case 2:
					printf ("    � carn�voro? ");
					scanf ("%d", &res);
					switch (res){
						case 1:
							printf ("    � voador? ");
							scanf ("%d", &res);
							switch (res){
								case 1:
									printf ("    Seu animal � a �guia \n");
								break;
								case 2:
									printf ("    Vive na floresta? ");
									scanf ("%d", &res);
									switch (res){
										case 1:
											printf ("    Seu animal � a cobra \n");
										break;
										case 2:
											printf ("    Seu animal � o pinguim \n");
										break;
									}
								break;
							}
						break;
						case 2:
							printf ("    � voador? ");
							scanf ("%d", &res);
							switch (res){
								case 1:
									printf ("    Seu animal � o pato \n"); 
								break;
								case 2:
									printf ("    Seu animal � o avestruz \n");
								break;
							}
						break;
					}
				break;
			}
		break;
		default:
			printf ("    Animal n�o encontrado \n");
		}
		printf (" Pressione 1 para continuar ou 0 para parar: ");
		scanf ("%d", &res1);
		system ("cls");		
	}while (res1 != 0);
	
	system ("Pause");
	return 0;
}
