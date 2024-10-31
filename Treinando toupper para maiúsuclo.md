#include <stdio.h>
#include <ctype.h>
char ch = 'a';

int main(){
	printf("Letra normal = %c \n", ch);
	//toupper converte o caractere para maiúsculo
	printf("Minusculo: %c\n", toupper(ch));
return 0;
}
