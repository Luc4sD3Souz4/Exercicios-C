#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL, "Portuguese");

	int soma = 0,
		num  = 0,
		i    = 0;
			
	for (i = 1; i <= 10; i++) {
		printf("Escreva o %d� n�mero: ", i);
		scanf("%d", &num);
		
        soma = soma + num;
    }
    
    printf("\nSoma dos dez n�meros: %d\n", soma);
    
    return(0);
}
