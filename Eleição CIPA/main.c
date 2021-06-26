#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>
#include <conio.c>
#include<time.h>//necessário p/ função time()
#include <stdlib.h>// necessário p/ as funções rand() e srand()

int main(int argc, char *argv[]){
	
	while(1){
		switch(acesso()){
			case 1: cadastroCandidato(); break;
			case 2: inicioEleicao(); break;
			case 3: exit(0); break;
			default: printf ("Opção inválida!\n"); break;
		}
	}
	return 0;
}
	float acharMaior(float*,int);
	int op, i, j, numC, voto, cont, tot;
	char ganhador[30];
	float maior;
	 struct cand{
	 	char nome[30];
	 	float parcial;
		char setor[30];
		int idade;
		int inscri;
		int tempo;
		int cont;
		
	};
	struct cand V[5];
	
	int acesso(){
		system("cls");
		system("color 02");
		setlocale (LC_ALL, "Portuguese");
		printf ("Sistema de Eleição CIPA\n");
		printf ("[1] Cadastrar Candidato \n");
		printf ("[2] Iniciar Eleição \n");
		printf ("[3] Excluir Candidatos \n");
		printf ("[4] Sair \n");
		printf ("Opção: ");
		scanf("%d", &op);
		return op;
	}
	
	int cadastroCandidato(){
		system("cls");
		setlocale (LC_ALL, "Portuguese");
		j=0;
		
		do{
			system("cls");
			printf("Número Cadidato: ");
			scanf("%d", &V[j].inscri);
			printf ("Nome do candidato: ");
			scanf("%s%*c", &V[j].nome);
			printf ("Setor onde trabalha: ");
			scanf("%s%*c", &V[j].setor);
			printf ("Idade do Candidato: ");
			scanf("%d%*c", &V[j].idade);
			printf ("Tempo de trabalho (anos): ");
			scanf("%d%*c", &V[j].tempo);
			j++;
			numC++;
			printf("pressione qualquer tecla pra continuar o cadastrando ou zero para para encerrar: ");
			scanf("%d", &op);
		} while(op != 0);
		
		printf ("Candidatos cadastrados com sucesso!\n");
		printf ("\n Pressione Enter para ir para a tela principal \n");
		getch();
		return 0;
	}
	
	int inicioEleicao(){
		int op;
		system("cls");
		system("color 2F");

		setlocale (LC_ALL, "Portuguese");
		printf ("===================================================\n");
		printf ("                  ELEIÇÃO CIPA 2021                \n");
		printf ("                  Seja Bem-Vindo                   \n");
		printf ("===================================================\n");
			for (i=0; i<numC; i++){
				printf("CANDIDATO %d   \n", i);
				printf ("Número: %d   ", V[i].inscri);
				printf ("Nome: %s     ", V[i].nome);
				printf ("Setor: %s    ", V[i].setor);
				printf ("Idade: %d    ", V[i].idade);
				printf ("Tempo de trabalho: %d anos \n\n", V[i].tempo);		
			}
		printf ("----------------------------------------------------\n");
		printf ("[1] Abrir votação [2] Apuração [3]Encerrar Eleição \n");
		printf ("----------------------------------------------------\n");
		puts ("O que deseja fazer? ");
		scanf("%d", &op);
		switch (op){
			case 1:
				votacao();
				break;
			case 2:
				apuracao();
				break;
			case 3:
				break;
			default:
				break;
		}
	}
	
	int votacao(){
		int es;
		textbackground(10);
		textcolor(0);
		puts ("Número do candidato que deseja votar: ");
		scanf("%d", &voto);
		if (voto == V[0].inscri){
			printf ("Confirmar voto em %s ? (sim=1/não=0)", V[0].nome);
			scanf("%d", &es);
			switch (es){
				case 0:
					printf ("Voto cancelado em %s!", V[0].nome);
					printf ("\n ENTER para voltar \n");
					getch();
					inicioEleicao();
					break;
				case 1:
					printf("\a");
					printf ("Voto confirmado em %s! \n", V[0].nome);
					V[0].cont++;
					tot++;
					getch();
					inicioEleicao();
					break;	
				default:
					printf ("Opção inválida!");
					getch();
					inicioEleicao();
					break;
			}
		} else if (voto == V[1].inscri){
			printf ("Confirmar voto em %s ? (sim=1/não=0)", V[1].nome);
			scanf("%d", &es);
			switch (es){
				case 0:
					printf ("Voto cancelado em %s!", V[1].nome);
					printf ("\n ENTER para voltar \n");
					getch();
					inicioEleicao();
					return 0;
					break;
				case 1:
					printf("\a");
					printf ("Voto confirmado em %s!", V[1].nome);
					printf ("\n ENTER para continuar \n");
					V[1].cont++;
					tot++;
					getch();
					inicioEleicao();
					return 0;
					break;	
				default:
					printf ("Opção inválida!");
					break;
			}
		} else if (voto == V[2].inscri){
			printf ("Confirmar voto em %s ? (sim=1/não=0)", V[2].nome);
			scanf("%d", &es);
			switch (es){
				case 0:
					printf ("Voto cancelado em %s!", V[2].nome);
					printf ("\n ENTER para voltar \n");
					getch();
					inicioEleicao();
					return 0;
					break;
				case 1:
					printf("\a");
					printf ("Voto confirmado em %s!", V[2].nome);
					printf ("\n ENTER para continuar \n");
					V[2].cont++;
					tot++;
					getch();
					inicioEleicao();
					return 0;
					break;	
				default:
					printf ("Opção inválida!");
					break;
			}
		} else if (voto == V[3].inscri){
			printf ("Confirmar voto em %s ? (sim=1/não=0)", V[3].nome);
			scanf("%d", &es);
			switch (es){
				case 0:
					printf ("Voto cancelado em %s!", V[3].nome);
					printf ("\n ENTER para voltar \n");
					getch();
					inicioEleicao();
					return 0;
					break;
				case 1:
					printf("\a");
					printf ("Voto confirmado em %s!", V[3].nome);
					printf ("\n ENTER para continuar \n");
					V[3].cont++;
					tot++;
					getch();
					inicioEleicao();
					return 0;
					break;	
				default:
					printf ("Opção inválida!");
					break;
			}
		} else if (voto == V[4].inscri){
			printf ("Confirmar voto em %s ? (sim=1/não=0)", V[4].nome);
			scanf("%d", &es);
			switch (es){
				case 0:
					printf ("Voto cancelado em %s!", V[4].nome);
					printf ("\n ENTER para voltar \n");
					getch();
					inicioEleicao();
					return 0;
					break;
				case 1:
					printf("\a");
					printf ("Voto confirmado em %s!", V[4].nome);
					printf ("\n ENTER para continuar \n");
					V[4].cont++;
					tot++;
					getch();
					inicioEleicao();
					return 0;
					break;	
				default:
					printf ("Opção inválida!");
					break;
			}
		} else if (voto == V[5].inscri){
			printf ("Confirmar voto em %s ? (sim=1/não=0)", V[5].nome);
			scanf("%d", &es);
			switch (es){
				case 0:
					printf ("Voto cancelado em %s!", V[5].nome);
					printf ("\n ENTER para voltar \n");
					getch();
					inicioEleicao();
					return 0;
					break;
				case 1:
					printf("\a");
					printf ("Voto confirmado em %s!", V[5].nome);
					printf ("\n ENTER para continuar \n");
					V[5].cont++;
					tot++;
					getch();
					inicioEleicao();
					return 0;
					break;	
				default:
					printf ("Opção inválida!");
					break;
			}
		}
	printf ("\n ENTER para sair \n");
	getch();
	inicioEleicao();
	return 0;
}
		
int apuracao(){
	system("cls");
		int aux, j, i;
		char aux2[30];
		float parcial[4];
		parcial[0]=(V[0].cont * 100)/tot;
		parcial[1]=(V[1].cont * 100)/tot;
		parcial[2]=(V[2].cont * 100)/tot;
		parcial[3]=(V[3].cont * 100)/tot;
		parcial[4]=(V[4].cont * 100)/tot;
		
		
		for (i = 0; i < 5; i++) {
			for (j = i; j > 5; j++) {
				if (parcial[i] < parcial[i]) {
					strcpy(aux2, V[i].nome);
					strcpy(V[i].nome, V[j].nome);                  
					strcpy(V[j].nome, aux2);
					aux = parcial[i];
					parcial[i]= parcial[j];
					parcial[j] = aux;
				}
			}
		}
		
		printf("\nTOTAL DE VOTOS: %d \n", tot);
		printf("------------------------------\n");
		for (i = 0; i < 5; i++){
			printf("Nome: %s ", V[i].nome);
			printf("Parcial: %.2f%% \n\n", parcial[i]);	
		}
		printf("------------------------------\n");
		printf("\n O vencedor é %s com %.2f%% dos votos\n", ganhador, acharMaior(parcial, 5)); 
		

	printf ("\n ENTER para sair \n");
	getch();
	inicioEleicao();
	return 0;
	}
	
float acharMaior(float *num, int sz){
	int i; 
   for(i=0; i < sz; i++){
      if (num[i] > maior){
         maior = num[i];
         strcpy(ganhador, V[i].nome);
      }
   }
	return maior;	
}


	
	
	
	
	
	
	

