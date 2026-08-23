#include <stdio.h>

int main(){
	int n1, n2;
	
	printf("Digite o primeiro numero\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero\n");
	scanf("%d", &n2);
	
	if(n1>n2){
		printf("O primeiro numero %d e maior que o segundo numero %d",n1,n2);
	}else if(n1 == n2){
		printf("%d e igual a %d",n1,n2);
	}else{
		printf("O segundo numero %d e maior que o primeiro numero %d",n2,n1);
	}
	
	return 0;
}
