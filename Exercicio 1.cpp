#include <stdio.h>
#include <string.h>

main () {
	char nome[256];
	
	printf("Qual seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	strtok(nome, "\n");
	printf("Boa noite, %s\n", nome);
	return 0;
}
