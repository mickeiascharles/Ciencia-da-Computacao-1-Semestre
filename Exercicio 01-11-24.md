#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	char nome[100];
	int i;
	printf("Digite o nome: ");
	gets(nome);
    for(i = 0; nome[i]; i++){
    	nome[i] = tolower(nome[i]);
	}
    printf("O nome em minusculo é: %s\n", nome);
    
    for(i = 0; nome[i]; i++){
    	nome[i] = toupper(nome[i]);
	}
	printf("O nome em maiusculo é: %s\n", nome);
}
