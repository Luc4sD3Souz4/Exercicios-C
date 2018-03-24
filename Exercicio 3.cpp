#include <stdio.h>
#include <stdlib.h>
/**
Descobre se seu número
é par ou ímpar
*/
int main() {
	// float é o tipo da variável que vai armazenar um número com casas decimais
	// int = número inteiro
	// float = número com casas decimais
	int   resto,
		  numero;
		// valor das variáveis
		resto = 0;
		numero = 0;
		// impressão das linhas na tela
		printf("********************\n");
		printf("Digite um numero\n");
		// scanf = digite algo
		// %f = é um float
		// %d = é um int
		// &variável = qual variável usar
		scanf("%d",&numero);
		printf("********************\n");
		resto = numero % 2; // % significa resto
	    if(resto==0){
	    	printf("Seu numero e par\n\n");
	    }else{
	    	printf("Seu numero e impar\n\n");	
	    }
		system("pause"); // não permite que a janela do prompt feche
		return 0;
}
