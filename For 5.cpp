#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	char frase[256];

	printf("Escreva uma frase: ");
	gets(frase);

	printf("\nFrase em mai�sculo: %s", strupr(frase));
	printf("\nFrase em min�sculo: %s", strlwr(frase));
}
