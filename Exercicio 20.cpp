#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	char letra;
	printf("Informe a avaliacao do aluno\n");
	printf("E\n");
	printf("V\n");
	printf("G\n");
	printf("A\n");
	printf("F\n");
	printf("");
	scanf("%c",&letra);
	letra = toupper(letra);
	if(letra == 'E') {
		printf("A nota do seu aluno e excelente");
	} else
	if(letra == 'V') {
		printf("A nota do seu aluno e muito boa");
	} else
	if(letra == 'G') {
		printf("A nota do seu aluno e boa");
	} else
	if(letra == 'A') {
		printf("A nota do seu aluno e razoavel");
	} else
	if(letra == 'F') {
		printf("Seu aluno esta reprovado");
	} else {
		printf("Esta letra nao e valida");
	}
	return 0;
}
