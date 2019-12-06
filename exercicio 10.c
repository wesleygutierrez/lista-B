#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valor, valor1, resultado;
	
	printf("coloque o primeiro valor:");
	scanf("%f", &valor);
	
	printf("coloque o segundo valor:");
	scanf("%f", &valor1);

	resultado=valor+valor1;
	printf("\nSoma: %f", resultado);

	resultado=valor-valor1;
	printf("\nSubtracao: %f", resultado);
	
	resultado=valor*valor1;
	printf("\nMultiplicaçao:%f", resultado);
	
	resultado=valor/valor1;
	printf("\n Divisao: %f",resultado);
}
