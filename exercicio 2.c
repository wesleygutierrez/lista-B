#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altura,raio,areacilindro,qtdlitros,qtdlatas,custo;
	printf("\nColoque o valor da altura em metros:");
	scanf("%f",&altura);
	printf("\nColoque o valor do raio em metros:");
	scanf("%f",&raio);
	areacilindro=3.14*raio*raio+2*3.14*raio*altura;
	printf("\nA area do cilindro e %.2f metros quadrados", areacilindro);
	qtdlitros=areacilindro/3;
	printf("\nA quantidade de litros necessaria e de %.2f",qtdlitros);
	qtdlatas=qtdlitros/5;
	printf("A quantidade de latas necessaria e de %.2f",qtdlatas);
	custo=qtdlatas*20;
	printf("\nO valor total das tintas e de R$ %.2f\n",custo);
	system("pause");
	
}
