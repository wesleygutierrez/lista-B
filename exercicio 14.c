#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float vprod,pd,vdesc;
	
	printf("Coloque o valor do item:");
	scanf("%f", &vprod);
	
	printf("Coloque o desconto:");
	scanf("%f", &pd);
	
	vdesc=vprod-(vprod*(pd/100));
	
	printf("valor do produto com desconto e:%f", vdesc);
}
