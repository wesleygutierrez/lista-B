#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	float a1,b1,a2,b2;
	float distancia;
	printf("\ncoloque o valor de a1:");
	scanf("%f",&a1);
	printf("\ncoloque o valor de b1:");
	scanf("%f",&b1);
	printf("\ncoloque o valor de a2:");
	scanf("%f",&a2);
	printf("\ncoloque o valor de b2:");
	scanf("%f",&b2);
	distancia=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
	printf("\nA distancia entre os locais P1 e P2 e %.2f\n", distancia);
	system("pause");
}
