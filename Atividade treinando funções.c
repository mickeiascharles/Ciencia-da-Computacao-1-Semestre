#include <stdio.h>
#include <locale.h>
char nome[100], cnpj[20], end[100], tel[15];

void cadastrar(){
setlocale(LC_ALL,"portuguese");
	printf("Digite o nome da empresa: ");
	gets(nome);
	printf("CNPJ: ");
	gets(cnpj);
	printf("Endereço: ");
	gets(end);
	printf("Telefone para contato: ");
	gets(tel);   
}
void imprimir(){
    printf("Nome da empresa: %s\n", nome);
	printf("CNPJ: %s\n", cnpj);
	printf("Endereço: %s\n", end);
	printf("Telefone: %s\n", tel);
}
int main(){
	cadastrar();
	imprimir();
}
	
