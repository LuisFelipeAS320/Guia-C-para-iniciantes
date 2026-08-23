#include <stdio.h>

int main(){
	int n1,n2;
	printf("Digite o primeiro numero: \n");
	scanf("%d",&n1);
	printf("Digite o segundo numero: \n");
	scanf("%d",&n2);
	
	printf("O resultado da soma desses numeros e: %d\n", n1 + n2);
	printf("O resultado da subtracao desses numeros e: %d\n", n1 - n2);
	printf("O resultado da multiplicacao desses numeros e: %d\n", n1 * n2);
	printf("O resultado da divisao desses numeros e: %.2f\n", (float)n1 / n2);
	
	return 0;
}
