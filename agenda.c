#include <stdio.h>
#include <string.h>
#define MAX 100

// Funcoes
int cadastrar(char Nomes[][50], char Telefones[][20], int total) {
	printf("Cadastrar Contato \n");
	return total;
}

void consultar(char Nomes[][50], char Telefones[][20], int total) {
	printf("Consultar Contato \n");
}

void listar(char Nomes[][50], char Telefones[][20], int total) {
	printf("Listar Contatos \n");
}

int excluir(char Nomes[][50], char Telefones[][20], int total) {
	printf("Excluir Contato \n");
	return total;
}

int main(void) {
	// variaveis
	char Nomes[MAX][50];
	char Telefones[MAX][20];
	int total = 0;
	int opcao;

	// menu
	do {
		printf("--- Agenda de Contatos --- \n");
		printf("1. Cadastrar Contato \n");
		printf("2. Consultar Contato \n");
		printf("3. Listar Contatos \n");
		printf("4. Excluir Contato \n");
		printf("5. Sair \n");
		printf("Escolha uma opcao: ");
		scanf("%i", &opcao);
		switch (opcao) {
			case 1:
				total = cadastrar(Nomes, Telefones, total);
				break;
			case 2:
				consultar(Nomes, Telefones, total);
				break;
			case 3:
				listar(Nomes, Telefones, total);
				break;
			case 4:
				total = excluir(Nomes, Telefones, total);
				break;
			case 5:
				printf("Saindo.... \n");
				break;
			default:
				printf("Opcao Invalida! \n");
		}
	} while (opcao != 5);
	return 0;
}