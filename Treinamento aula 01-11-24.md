#include<stdio.h>
#include<string.h>
#include<locale.h>
char string1[50];
char string2[50];
int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a 1º palavra: ");
	scanf("%[^\n]%*c", string1);
	
	//string2 = string1;
	strcpy(string2, string1);
	printf("String 1 é: %s\n", string1);
	printf("String 2 é: %s\n", string2);
}
