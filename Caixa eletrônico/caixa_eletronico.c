#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <math.h>

int main() {
	
	while (1){
		switch(acesso()){
			case 1: login(); break;
			case 2: cadastroSenha(); break;
			case 3: exit(0); break;
			default: printf ("Opção inválida!\n"); break;
		}
	}
	return 0;
}

int senha, op;
char nome [20];
float saldo, empre, depo, saque, parcela;

int acesso(){
	system("cls");
	setlocale (LC_ALL, "Portuguese");
	puts (" 1 - Entrar \n");
	puts (" 2 - Criar a conta \n");
	puts (" 3 - Sair \n");
	printf ("Opção: ");
	scanf ("%d", &op);
	return op;
}

int cadastroSenha(){
	system ("cls");
	int cod;
	setlocale (LC_ALL, "Portuguese");
	printf ("Digite seu primeiro nome: ");
	scanf("%s", &nome);
	printf ("digite uma senha numérica (max cinco dígitos): ");
	scanf ("%d", &cod);
	senha = cod;
	saldo = 10000;	
	printf ("Usuário criado, conta recebeu um depósito inicial de R$10.000,00 \n");
	printf ("\n Pressione Enter para ir para a tela principal \n");
	getch();
	return 0;
}

int login(){
	system ("cls");
	setlocale(LC_ALL, "Portuguese");
	int cod;
	printf ("Entre com a sua senha: ");
	scanf ("%d", &cod);
	if (senha == cod)
	{
		menu();
	}
	else{
		printf ("Acesso Negado!\n");
	}
	printf ("\n ENTER para continuar \n");
	getch();
	return 0;
}

int menu(){
	int op;
	setlocale (LC_ALL, "Portuguese");
	system ("cls");
	printf ("===================================================\n");
	printf ("            C A I X A   E L E T R Ô N I C O        \n");
	printf ("            BEM - VINDO, %s                \n", nome);
	printf ("===================================================\n");
	printf ("	           O P Ç Õ E S :                \n");
	printf (" [1] - Saque \n [2] - Depósito \n [3] - Empréstimo \n [4] - Pagar Contas \n [5] - Consultar Saldo \n [6] - voltar \n\n");
	printf ("qual opção? ");
	scanf ("%d", &op);
	switch(op){
			case 1: sacar(); break;
			case 2: deposito(); break;
			case 3: emprestimo(); break;
			case 4: pagarContas(); break;
			case 5: sald(); break;
			case 6: main(); break;
			default: printf ("Opção inválida!\n"); break;
	}
	getch();
	return 0;
}

int sacar(){
	system("cls");
	float saque;
	printf ("Você pode sacar até R$ %.2f \n", saldo);
    printf ("Quanto deseja sacar? ");
	scanf ("%f", &saque);
	if (saque <= saldo)
	{
		saldo = saldo - saque;
		printf ("Você sacou R$ %.2f \n", saque);
		printf ("Saldo anterior: R$ %.2f \n",saldo+saque);
		printf ("Saldo atual: R$ %.2f \n", saldo);
		printf ("\n ENTER para continuar \n");
		getch();
		menu();
		return 0;
	}
	else 
	{
		printf ("Saldo insuficinte para saque! \n");
		printf ("\n ENTER para continuar \n");
		getch();
		sacar();
		return 0;	
	}
}

int deposito(){
	float depo;
	printf ("Qual o valor do depósito que deseja realizar? ");
	scanf ("%f", &depo);
	saldo += depo;
	printf ("Depósito de R$ %.2f", depo);
	printf (" realizado com sucesso na conta de %s \n", nome);
	printf ("Saldo anterior: R$ %.2f \n",saldo-depo);
	printf ("Saldo atual: R$ %.2f \n", saldo);
	printf ("\n ENTER para continuar \n");
	getch();
	menu();
	return 0;
	
}

int emprestimo(){
	system("cls");
	setlocale (LC_ALL, "Portuguese");
	int parc, val;
	printf ("VALORES DISPONÍVEIS PARA EMPRÉSTIMO (10 por cento ao mês): \n");
	printf (" [1] R$ 2.000,00 \n [2] R$ 4.000,00 \n [3] R$ 6.000,00 \n [4] R$ 8.000,00 \n");
	printf ("Qual opção? ");
	scanf ("%d", &val);
	printf (" Quantas parcelas (máximo 24 parcelas)? ");
	scanf ("%d", &parc);
	if (parc <= 24){
		switch (val){
			case 1:
				empre = 2000;
				parcela = empre/parc;
				parcela += (parcela * 10)/100;
				saldo += parcela * parc;
				break;
			case 2:
				empre = 4000;
				parcela = empre/parc;
				parcela += (parcela * 10)/100;
				saldo += parcela * parc;
				break;
			case 3:
				empre = 6000;
				parcela = empre/parc;
				parcela += (parcela * 10)/100;
				saldo += parcela * parc;
				break;
			case 4:
				empre = 8000;
				parcela = empre/parc;
				parcela += (parcela * 10)/100;
				saldo += parcela * parc;
				break;
			default:
				printf ("Valor Inválido! \n");
				break;
		}
			printf ("   Empréstimo de R$ %.2f", empre += (empre*10)/100);
			printf (" foi realizado com sucesso na conta de %s \n", nome);
			printf ("   Juros acrescidos de 10 por cento com %d parcelas de R$ %.2f\n", parc, parcela);
			printf ("Saldo anterior: R$ %.2f \n", saldo-(parcela * parc));
	        printf ("Saldo atual: R$ %.2f \n", saldo);
			printf ("\n ENTER para continuar \n");
			getch();
			menu();
			return 0;
	} 
	else
	{
		printf ("Número de parcelas indisponível!");
		printf ("\n ENTER para continuar \n");
		getch();
		emprestimo();
		return 0;
	}
}
int pagarContas(){
	system("cls");
	float deb;
	printf ("Qual o valor da conta que deseja pagar? ");
	scanf ("%f", &deb);
	saldo = saldo - deb;
	printf ("Pagamento de R$ %.2f", deb);
	printf (" realizado com sucesso na conta de %s \n", nome);
	printf ("Saldo anterior: R$ %.2f \n", saldo+deb);
	printf ("Saldo atual: R$ %.2f \n", saldo);
	printf ("\n ENTER para continuar \n");
	getch();
	menu();
	return 0;
}

int sald(){
	system ("cls");
	printf ("===================================================\n");
	printf ("BEM VINDO, %s \n\n", nome);
	printf ("Saldo atual: R$ %.2f \n", saldo);
	printf ("===================================================\n");
	printf ("\n ENTER para continuar \n");
	getch();
	menu();
	return 0;
}

