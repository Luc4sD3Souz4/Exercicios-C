#include <stdio.h>
#include <string.h>

main () {
	float salario,
	      valorHora;
	int horas;
	char nome[256],
		 matricula[256];
	
	printf("Digite o nome: ");
	fgets(nome, sizeof(nome), stdin);
	strtok(nome, "\n");
	printf("Digite a matricula: ");
	fgets(matricula, sizeof(matricula), stdin);
	strtok(matricula, "\n");
	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%d",&horas);
	printf("Digite o valor/hora da empresa (em reais): ");
	scanf("%f",&valorHora);
	salario = horas * valorHora;
	printf("O salario bruto de %s ", nome);
	printf("(matricula %s) ", matricula);
	printf("e de %.2f", salario);
	return 0;
}
