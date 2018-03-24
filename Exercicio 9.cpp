#include <stdio.h>
#include <stdlib.h>

int main () {
	int primeiro,
		segundo,
		terceiro;
		
	printf("Digite um numero: ");
	scanf("%d",&primeiro);
	printf("Digite outro numero: ");
	scanf("%d",&segundo);
	printf("Digite outro numero: ");
	scanf("%d",&terceiro);
	if (primeiro > segundo && primeiro > terceiro){
		printf("%d e o maior numero", primeiro);
	} else
	if (segundo > primeiro && segundo > terceiro){
		printf("%d e o maior numero", segundo);
	} else 
	if (terceiro > primeiro && segundo < terceiro){
		printf("%d e o maior numero", terceiro);
	} else
	if (terceiro == primeiro && terceiro == segundo){
		printf("%d e o maior numero", terceiro);
	} else
	if (terceiro == primeiro && terceiro > segundo){
		printf("%d e o maior numero", terceiro);
	} else
	if (terceiro == segundo && terceiro > primeiro){
		printf("%d e o maior numero", terceiro);
	} else
	if (primeiro == segundo && terceiro < primeiro){
		printf("%d e o maior numero", terceiro);
	}
	return 0;
}
