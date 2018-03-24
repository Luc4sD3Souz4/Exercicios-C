#include <stdio.h>

int main () {
	float lado1,
		  lado2,
		  lado3;
	printf("Digite o valor de um lado do triangulo: ");
	scanf("%f",&lado1);
	printf("Digite o valor de outro lado do triangulo: ");
	scanf("%f",&lado2);
	printf("Digite o valor de outro lado do triangulo: ");
	scanf("%f",&lado3);
	if (lado1 == lado2 && lado2 == lado3) {
		printf("Equilatero");
	} else
	if (lado1 == lado2 && lado2 != lado3) {
		printf("Isosceles");
	} else
	if (lado1 != lado2 && lado2 == lado3) {
		printf("Isosceles");
	} else
	if (lado1 == lado3 && lado2 != lado3) {
		printf("Isosceles");
	} else {
		printf("Escaleno");
	}
	return 0;
}
