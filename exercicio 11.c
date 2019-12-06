#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor, resultado;
	
	printf("Digite um valor:");
	scanf("%f", &valor);
	
	resultado=valor*valor;
	
	printf("O quadrado do valor e:%f", resultado);
}
