#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("O c�digo ASCII do caractere '%c' � %d em decimal e %X em hexadecimal.\n", c, c, c);

    return 0;
}

