#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num;
	
	printf("Coloque um numero");
	scanf("%d", &num);
	
	if ((num%2)==0){
		printf("O numero e par \n");
	}
	else{
		printf("O numero e impar \n");
	}
	if (num>=0){
		printf("O numero e positivo\n");
	}
	else{
		printf("O numero e negativo\n");
	}
}

