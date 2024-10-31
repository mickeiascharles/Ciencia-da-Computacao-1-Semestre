#include <stdio.h>
#include <string.h>
#include <locale.h>
char s1[] = "Mickeias Charles de Oliveira Paiva";

int main(){
setlocale(LC_ALL,"portuguese");
	//strlen conta o número de caracteres na string
	printf(s1);
	printf("\nTamanho da memória s1: %lu\n", strlen(s1));
	return 0;
}
