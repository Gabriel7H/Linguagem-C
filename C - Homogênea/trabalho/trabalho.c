#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	
	float saldo, empre, depo, saque;
	int opcao, val, parc;
	char nome[10];
	
	
	printf ("===================================================\n");
	printf ("            C A I X A   E L E T R � N I C O        \n");
	printf ("===================================================\n\n");
	
	printf ("	           O P � � E S :                \n");
	printf (" 1 - Abrir Conta \n 2 - Saque \n 3 - Dep�sito \n 4 - Empr�stimo \n 5 - Ver Conta do Usu�rio \n 0 - Sair \n\n");
	
	do {
		printf ("O que deseja fazer?: ");
			scanf ("%d", &opcao);
		switch (opcao){
		case 1:
			system("cls");
			printf ("===================================================\n");
			printf ("            C A I X A   E L E T R � N I C O        \n");
			printf ("===================================================\n\n");
	
			printf ("	           O P � � E S :                \n");
			printf (" 1 - Abrir Conta \n 2 - Saque \n 3 - Dep�sito \n 4 - Empr�stimo \n 5 - Ver Conta do Usu�rio \n 0 - Sair \n\n");
			printf ("Nome: ");
			scanf ("%s", &nome);
			saldo = 10000;
			printf ("Usu�rio criado, conta recebeu um dep�sito inical de R$10.000,00 \n");
			break;
		case 2:
			system("cls");
			printf ("===================================================\n");
			printf ("            C A I X A   E L E T R � N I C O        \n");
			printf ("===================================================\n\n");
	
			printf ("	           O P � � E S :                \n");
			printf (" 1 - Abrir Conta \n 2 - Saque \n 3 - Dep�sito \n 4 - Empr�stimo \n 5 - Ver Conta do Usu�rio \n 0 - Sair \n\n");
			printf ("Voc� pode sacar at� R$ %.2f \n", saldo);
			printf ("Quanto deseja sacar? ");
			scanf ("%f", &saque);
			if (saque > 50 && saque <= 10000)
			{
				saldo -= saque;
				printf ("Voc� sacou R$ %.2f \n", saque);
			}
			else 
			{
				printf ("Saldo insuficinte para saque! \n");	
			}					
			break;
		case 3:
			system("cls");
			printf ("===================================================\n");
			printf ("            C A I X A   E L E T R � N I C O        \n");
			printf ("===================================================\n\n");
	
			printf ("	           O P � � E S :                \n");
			printf (" 1 - Abrir Conta \n 2 - Saque \n 3 - Dep�sito \n 4 - Empr�stimo \n 5 - Ver Conta do Usu�rio \n 0 - Sair \n\n");
			printf ("Voc� pode sacar at� R$ %.2f \n", saldo);
			printf ("Qual o valor do dep�sito que deseja realizar? ");
			scanf ("%f", &depo);
			saldo += depo;
			printf ("Dep�sito de R$ %.2f", depo);
			printf (" realizado com sucesso na conta de %s \n", nome);
			break;
		case 4:
			system("cls");
			printf ("===================================================\n");
			printf ("            C A I X A   E L E T R � N I C O        \n");
			printf ("===================================================\n\n");
			printf ("	           O P � � E S :                \n");
			printf (" 1 - Abrir Conta \n 2 - Saque \n 3 - Dep�sito \n 4 - Empr�stimo \n 5 - Ver Conta do Usu�rio \n 0 - Sair \n\n");
			printf ("VALORES DISPON�VEIS PARA EMPR�STIMO: \n");
			printf (" [1] R$ 2.000,00 \n [2] R$ 4.000,00 \n [3] R$ 6.000,00 \n [4] R$ 8.000,00 \n");
			printf ("Qual op��o? ");
			scanf ("%d", &val);
				switch (val){
					case 1:
						empre = 2000;
						saldo += empre;
						break;
					case 2:
						empre = 4000;
						saldo += empre;
						break;
					case 3:
						empre = 6000;
						saldo += empre;
						break;
					case 4:
						empre = 8000;
						saldo += empre;
						break;
					default:
						printf ("Valor Inv�lido! \n");
						break;
				}
			printf ("   Quantas parcelas:");
			scanf ("%d", &parc);
			printf ("   Empr�stimo de R$ %.2f", empre);
			printf (" foi realizado com sucesso na conta de %s \n", nome);
			printf ("   Juros acrescidos de 2,9 por cento com %d", parc);
			printf (" parcelas \n");
			break;
		case 5:
			system("cls");
			printf ("===================================================\n");
			printf ("            C A I X A   E L E T R � N I C O        \n");
			printf ("===================================================\n\n");
	
			printf ("	           O P � � E S :                \n");
			printf (" 1 - Abrir Conta \n 2 - Saque \n 3 - Dep�sito \n 4 - Empr�stimo \n 5 - Ver Conta do Usu�rio \n 0 - Sair \n\n");			
			printf ("===================================================\n");
			printf ("BEM VINDO, %s \n\n", nome);
			printf ("Saldo atual: R$ %.2f \n", saldo);
			printf ("===================================================\n");
			break;
		case 0:
			exit(0);
			break;
		default:
			printf ("Op��o Inv�lida! \n");
			break;
		}
		
	} while (opcao != 0);		
	system ("PAUSE");
	return 0;
}
