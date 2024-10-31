#include <stdio.h>
#include <ctype.h>
char ch = 'A';

int main(){
	printf("Letra normal = %c \n", ch);
	//tolower converte o caractere para minúsculo
	printf("Minusculo: %c\n", tolower(ch));
	return 0;
}
