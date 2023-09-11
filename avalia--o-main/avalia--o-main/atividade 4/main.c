#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	float fahrenheit, celsius;
	
	printf("Digite a temperatura em fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5 / 9;
	
	printf("A temperatura em celsius é: %.2f\n", celsius);
	return 0;
}
