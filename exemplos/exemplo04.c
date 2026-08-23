#include <stdio.h>

int main(){
	int n1,n2,operacao;
	
	printf("Digite o primeiro numero\n");
	scanf("%d", &n1);
	printf("Digite o segundo numero\n");
	scanf("%d", &n2);
	printf("Escolha a operacao que voce quer executar\n1 - Soma\t2 - Subtracao\t3 - Multiplicacao\t4 - Divisao\n");
	scanf("%d", &operacao);
	
	switch(operacao){
		case 1:
			printf("O resultado e: %d",n1 + n2);
		break;
		
		case 2: 
			printf("O resultado e: %d",n1 - n2);
		break;
		
		case 3:
			printf("O resultado e: %d",n1 * n2);
		break;
		
		case 4:
			if(n2 == 0){
				printf("erro: divisao com denominador 0");
			}else{
				printf("O resultado e: %.2f",(float)n1 / n2);
			}
		break;
		
		default:
			printf("Operacao invalida");
		break;
	}
}
