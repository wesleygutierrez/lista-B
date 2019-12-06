#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[100], telefone[100],endereco[100];
		printf("coloque o seu nome:");
		scanf("%s",&nome);
		
		printf("coloque seu telefone:");
		scanf("%s",&telefone);
		
		printf("coloque seu endereco:");
		scanf("%s",&endereco); 
		
		printf("\ndados - nome:%s, telefone:%s, endereco:%s", nome, telefone, endereco);
}
