#include <stdio.h>

int main () {
	 float salarioVelho,
	 	   percentual,
	 	   percentualFinal,
	 	   salarioNovo;
	 	   
	 printf("Digite o salario mensal atual: ");
	 scanf("%f",&salarioVelho);
	 printf("Digite o percentual de reajuste: ");
	 scanf("%f",&percentual);
	 percentualFinal = percentual / 100;
	 salarioNovo = percentualFinal * salarioVelho;
	 printf("Salario com reajuste = ");
	 printf("%.2f",salarioNovo);
	 return 0;
}
