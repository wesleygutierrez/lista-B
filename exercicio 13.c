#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float base, altura, perimetro, area;
	
	printf("Coloque a base:");
	scanf("%f", &base);
	
	printf("Coloque a altura:");
	scanf("%f", &altura);
	
	perimetro=base+altura;
	area=base*altura;
	
	printf("perimetro: %f \n", perimetro);
	printf("area:%f \n", area);
}
