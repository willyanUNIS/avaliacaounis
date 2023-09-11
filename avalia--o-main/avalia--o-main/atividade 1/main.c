#include <stdio.h>
#include <locale.h>


void main () {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2;
	float media;
	
	
	printf("Digite sua primeira nota:");
	scanf("%f", &nota1);
	
	printf("Digite a sua segunda nota:");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2;
	
	printf("a media é: %.2f\n", media);
	
}
