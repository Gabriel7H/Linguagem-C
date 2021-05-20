#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	float preco, novo_preco;
	setlocale(LC_ALL, "Portuguese");
	printf ("Preço do produto: ");
	scanf ("%f", &preco);
	novo_preco = preco - (preco * 0.1);
	printf ("O preço com um desconto de 10 por cento é: %.2f \n", novo_preco);
	system ("PAUSE");
	return 0;
}
