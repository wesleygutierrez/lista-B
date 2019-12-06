#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int valor,valor2,sub;
	
	printf("coloque um valor:");
	scanf("%d",&valor);
	
	printf("coloque o segundo valor:");
	scanf("%d",&valor2);
	sub = valor - valor2;
	printf("resultado:%d",sub);
}
