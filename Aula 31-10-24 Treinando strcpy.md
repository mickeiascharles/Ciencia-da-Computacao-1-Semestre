#include <stdio.h>
#include <string.h>
char s1[10];
char s2[] = "ola";

int main(){
	printf("s1 = %s \n", s1);
	printf("s2 = %s \n\n", s2);
	     //strcpy copia a string s2 para s1
	strcpy(s1, s2);
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	return 0;	
}
