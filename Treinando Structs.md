#include <stdio.h>
#include <locale.h>
struct sala{
     char nome[50]; 
	 int matricula;
};

void cadastro(){
setlocale (LC_ALL, "portuguese");
	struct sala estudante1; //criamos o objeto
	printf("Digite o nome do(a) estudante: ");
	fflush(stdin);
	gets(estudante1.nome);
	printf("Matrícula: ");
	scanf("%i", &estudante1.matricula);	
	system("cls");
	printf("Nome: %s\n", estudante1.nome);
	printf("Matrícula: %i\n", estudante1.matricula);
	system("pause");
	system("cls");
	
	struct sala estudante2; //criamos o objeto
	printf("Digite o nome do(a) estudante: ");
	fflush(stdin);
	gets(estudante2.nome);
	printf("Matrícula: ");
	scanf("%i", &estudante2.matricula);
	system("cls");
	printf("Nome: %s\n", estudante2.nome);
	printf("Matrícula: %i\n", estudante2.matricula);
}

int main(){
	cadastro();
}
	
