#include <stdio.h>

int main(){
	int n1;
	do
	{
	printf("Digite um numero de 1 a 10\n");
	scanf("%d", &n1);
	if(n1 < 1 || n1 > 10){
		printf("numero invalido\n");
	}else{
		printf("Numero valido");
	}
	}while(n1 < 1 || n1 > 10);
}
