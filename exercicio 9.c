#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float valor, valor1, valor2, media;
	
	printf("coloque o primeiro valor:");
	scanf("%f", &valor);
	
	printf("coloque o segundo valor:");
	scanf("%f", &valor1);
	
	printf("coloque o terceiro numero:");
	scanf("%f", &valor2);
	
	media= (valor+valor2+valor1) /3;
	printf("media: %f", media);
}
