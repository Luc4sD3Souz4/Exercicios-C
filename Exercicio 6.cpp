#include <stdio.h>

main () {
	int numero;
	float resto;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	resto = numero % 5;
	if (resto==0) {
		printf("Seu numero e divisivel por 5");
	} else {
		printf("Seu numero nao e divisivel por 5");
	}
	return 0;
}
