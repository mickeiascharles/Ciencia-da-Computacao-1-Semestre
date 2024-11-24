#include <stdio.h>
#include <string.h>
char nome[50], nome2[50];
char nome_completo[100];

int main(){
	printf("Digite o primeiro nome: ");
	fflush(stdin);
	gets(nome);
	
	printf("Digite o nome completo: ");
	fflush(stdin);
	gets(nome_completo);
	
	strcpy(nome, nome_completo);
	system("cls");
	printf("Nome: %s\n", nome);
	printf("Nome Completo: %s\n", nome_completo);
	
	strncpy(nome2, nome_completo, 8); //conta apenas as primeiras 8 caracteres
	printf("Nome: %s\n", nome2);
	
return 0;
}
