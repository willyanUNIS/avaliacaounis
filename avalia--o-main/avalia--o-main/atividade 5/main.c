#include <stdio.h>
#include <math.h>
#include <locale.h>


int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float cateto1, cateto2, hipotenusa;
	
	printf("Digite a medida do primeiro cateto: ");
	scanf("%f", &cateto1);
	
	printf("Digite a medida do segundo cateto: ");
	scanf("%f", &cateto2);
	
	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
	
	printf("A medida da hipotenusa é : %.2f\n", hipotenusa);
	return 0;
}


