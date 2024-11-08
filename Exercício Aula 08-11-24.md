#include<stdio.h>
#include<locale.h>
struct loja{
	char nome[65];
	float preco;
}cadeira, mesa; //criando o objeto

int main(){
setlocale(LC_ALL, "portuguese");
	printf("Digite o nome da cadeira: ");
	fflush(stdin);
	fgets(cadeira.nome, sizeof(cadeira.nome), stdin);
	
	printf("Digite o preço: ");
	scanf("%f", &cadeira.preco);
	system("cls");
	
	printf("%s", cadeira.nome);
	printf("%.2f", cadeira.preco);
	
}
