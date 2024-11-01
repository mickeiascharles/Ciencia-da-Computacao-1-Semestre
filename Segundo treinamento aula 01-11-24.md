#include <stdio.h>
#include <string.h>
#include<locale.h>
char a[100];
char b[50];
int main(){
	setlocale(LC_ALL,"portuguese");
	printf("Digite a 1º palavra: ");
	scanf("%[^\n]%*c", a);
	printf("Digite a 2º palavra: ");
	scanf("%[^\n]%*c", b);
	//strlen conta quantas letra tem a string
	printf("Tamanho da string 1 é: %u\n", strlen(a));
	printf("Tamanho da string 2 é: %u\n", strlen(b));
	return 0;
}
