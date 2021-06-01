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
		printf ("                  QUAL É O ANIMAL? \n");
		printf ("====================================================\n");
		printf (" ATENÇÃO : Responda as perguntas com 1=sim ou 2=não \n");
		printf ("====================================================\n");
		printf ("    É mamífero? ");
		scanf ("%d", &res);
		switch (res){
		case 1: 
			printf ("    É quadrúpede? ");
			scanf ("%d", &res);
			switch (res){
			case 1:
			 	printf ("    É carnívoro? ");
			 	scanf ("%d", &res);
			 	switch (res){
			 	case 1:
					printf ("    Seu animal é o Leão! \n");
				break;			
				case 2:
					printf ("    Seu animal é o Cavalo! \n");
				break;
				}
			break;
			case 2:
				printf ("    É carnívoro? ");
				scanf ("%d", &res);
				switch (res){
					case 1:
						printf ("    Seu animal é a baleia! \n");
					break;
					case 2:
						printf ("    É Voador? ");
						scanf ("%d", &res);
						switch (res){
							case 1:
								printf ("    Seu animal é o morcego! \n");
							break;
							case 2:
								printf ("    Vive geralmente na floresta? ");
								scanf ("%d", &res);
								switch (res){
									case 1:
										printf ("    Seu animal é o macaco \n");
									break;
									case 2:
										printf ("    O animal é o Homem \n"); 
									break;
								}
						}  break;
					break;
				}	
			break;
			}
		break;
		case 2:
			printf ("    É quadrupede? ");
			scanf ("%d", &res);
			switch (res){
				case 1:
					printf ("    É carnívoro? ");
					scanf ("%d", &res);
					switch (res){
						case 1:
							printf ("    Seu animal é o crocodilo \n");
						break;
						case 2:
							printf ("    Seu animal é a tartaruga \n");
						break;
					}
				break;
				case 2:
					printf ("    É carnívoro? ");
					scanf ("%d", &res);
					switch (res){
						case 1:
							printf ("    É voador? ");
							scanf ("%d", &res);
							switch (res){
								case 1:
									printf ("    Seu animal é a águia \n");
								break;
								case 2:
									printf ("    Vive na floresta? ");
									scanf ("%d", &res);
									switch (res){
										case 1:
											printf ("    Seu animal é a cobra \n");
										break;
										case 2:
											printf ("    Seu animal é o pinguim \n");
										break;
									}
								break;
							}
						break;
						case 2:
							printf ("    É voador? ");
							scanf ("%d", &res);
							switch (res){
								case 1:
									printf ("    Seu animal é o pato \n"); 
								break;
								case 2:
									printf ("    Seu animal é o avestruz \n");
								break;
							}
						break;
					}
				break;
			}
		break;
		default:
			printf ("    Animal não encontrado \n");
		}
		printf (" Pressione 1 para continuar ou 0 para parar: ");
		scanf ("%d", &res1);
		system ("cls");		
	}while (res1 != 0);
	
	system ("Pause");
	return 0;
}
