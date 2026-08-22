# Estruturas de repetição



As estruturas de repetição, também chamadas de **laços de repetição** ou **loops**, permitem executar um mesmo bloco de código várias vezes sem a necessidade de escrevê-lo repetidamente.



Em C, as principais estruturas de repetição são while, do...while e for.



## while



A estrutura while repete um bloco de código enquanto uma determinada condição for verdadeira.

Sua estrutura básica é:



while (condicao) {

// Código que será repetido

}



Por exemplo:

int contador = 1;



while (contador <= 5) {

printf("%d\\n", contador);
	contador++;

}



Nesse exemplo, o programa começa com contador valendo 1. Antes de cada repetição, a condição contador <= 5 é verificada.

Enquanto ela for verdadeira, o bloco será executado e contador será incrementado em um. O resultado será:



1

2

3

4

5



Quando contador chegar a 6, a condição será falsa e o laço será encerrado.

Como a condição do while é verificada **antes** da execução do bloco, é possível que ele não seja executado nenhuma vez caso a condição já seja falsa inicialmente.



## do...while



A estrutura do...while funciona de maneira semelhante ao while, mas possui uma diferença importante: sua condição é verificada **depois** da execução do bloco.

Sua estrutura básica é:

do {

// Código que será repetido

} while (condicao);



Por exemplo:

int numero;

do {

printf("Digite um numero entre 1 e 10: ");
	scanf("%d", \&numero);


} while (numero < 1 || numero > 10);



Nesse exemplo, o programa solicita um número ao usuário e continua repetindo enquanto o valor informado estiver fora do intervalo entre 1 e 10. Como a condição é verificada somente no final, o bloco do do...while é executado pelo menos uma vez. Observe também a presença do ; após a condição do while.



## for



A estrutura for é bastante utilizada quando sabemos ou conseguimos controlar a quantidade de repetições através de um contador. Sua estrutura básica é:


for (inicializacao; condicao; atualizacao) {

// Código que será repetido

}


Por exemplo:


int i;

for (i = 1; i <= 5; i++) {

printf("%d\\n", i);

}


O for possui três partes principais:



* **Inicialização:** i = 1 define o valor inicial do contador.
* **Condição:** i <= 5 determina enquanto o laço continuará sendo executado.
* **Atualização:** i++ incrementa o contador após cada repetição.



O exemplo exibirá os números de 1 até 5.



## Qual estrutura utilizar?



As três estruturas permitem criar repetições, mas podem ser mais adequadas para situações diferentes.



**while:** É útil quando a repetição depende de uma condição e não sabemos necessariamente quantas vezes o código precisará ser executado.



**do...while:** É útil quando precisamos garantir que o bloco seja executado pelo menos uma vez antes de verificar a condição.



**for:** É muito utilizado quando trabalhamos com um contador ou quando a quantidade de repetições pode ser controlada de maneira mais direta.



## Cuidado com loops infinitos



Ao criar uma estrutura de repetição, é importante garantir que sua condição possa se tornar falsa em algum momento.

Por exemplo:



int numero = 1;



while (numero <= 5) {

&#x20;   printf("%d\\n", numero);

}



Nesse caso, numero nunca é alterado. Como seu valor continuará sendo 1, a condição numero <= 5 permanecerá verdadeira e o programa continuará executando o laço indefinidamente. Uma forma de corrigir seria atualizar a variável:



int numero = 1;



while (numero <= 5) {

&#x20;   printf("%d\\n", numero);

&#x20;   numero++;

}



Agora o valor de numero aumenta a cada repetição até que a condição se torne falsa.

