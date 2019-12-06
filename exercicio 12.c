#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float saldo, nsaldo;
	
	printf("Digite o saldo:");
	scanf("%f", &saldo);
	
	nsaldo=saldo+saldo*0.02;
	printf("Novo saldo:%f", nsaldo); 
}
