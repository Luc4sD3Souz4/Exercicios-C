#include <stdio.h>
#include <stdlib.h>
/**
Descobre se seu n�mero
� par ou �mpar
*/
int main() {
	// float � o tipo da vari�vel que vai armazenar um n�mero com casas decimais
	// int = n�mero inteiro
	// float = n�mero com casas decimais
	int   resto,
		  numero;
		// valor das vari�veis
		resto = 0;
		numero = 0;
		// impress�o das linhas na tela
		printf("********************\n");
		printf("Digite um numero\n");
		// scanf = digite algo
		// %f = � um float
		// %d = � um int
		// &vari�vel = qual vari�vel usar
		scanf("%d",&numero);
		printf("********************\n");
		resto = numero % 2; // % significa resto
	    if(resto==0){
	    	printf("Seu numero e par\n\n");
	    }else{
	    	printf("Seu numero e impar\n\n");	
	    }
		system("pause"); // n�o permite que a janela do prompt feche
		return 0;
}
