#include <stdio.h>

int main(){
	
	int n1;
	
	printf("Digite um numero\n");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0){
		printf("O numero e par");
	}else{
		printf("O numero e impar");
	}
	
	return 0;
}
