#include <stdio.h>

int main () {
	int extra,
	    primeiroValor,
		segundoValor;
		
	printf("Digite o primeiro valor: ");
	scanf("%d",&primeiroValor);
	printf("Digite o segundo valor: ");
	scanf("%d",&segundoValor);
	extra = primeiroValor;
	primeiroValor = segundoValor;
	segundoValor = extra;
	printf("Primeiro Valor = %d\n", primeiroValor);
	printf("Segundo Valor = %d", segundoValor);
	return 0;
}
