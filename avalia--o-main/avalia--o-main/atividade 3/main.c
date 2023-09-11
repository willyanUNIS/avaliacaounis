#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("O código ASCII do caractere '%c' é %d em decimal e %X em hexadecimal.\n", c, c, c);

    return 0;
}

