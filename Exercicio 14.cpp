#include <stdio.h>

int main() {
	float percentual,
		  comissao,
		  salarioFixo,
		  montante,
		  salarioFinal;
		  
	percentual = 0.05;
    printf("Digite o salario fixo do funcionario: ");
    scanf("%f",&salarioFixo);
    printf("Digite o montante vendido no mes: ");
    scanf("%f",&montante);
    comissao = percentual * montante;
    salarioFinal = salarioFixo + comissao;
    printf("O salario final do funcionario e de %.2f reais", salarioFinal);
    return 0;
}
