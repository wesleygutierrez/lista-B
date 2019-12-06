#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("informe o primeiro lado:");
	scanf("%d",&a);
	printf("informe o segundo lado:");
	scanf("%d",&b);
	printf("informe o terceiro lado:");
	scanf("%d",&c);
	
	if((a==0 || b==0 || c==0) || (a+b<c || a+c<b ||b+c<a)){
		printf("os valores não são lados de um triangulo\n");
	}
	else{
		printf("Os valores são lados de um triangulo\n");
	}
	
	
}
