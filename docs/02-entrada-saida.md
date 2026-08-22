# Entrada e saída de dados





## A biblioteca <stdio.h>



A biblioteca <stdio.h> é uma biblioteca da linguagem C que contém as definições e declarações necessárias para o funcionamento das funções printf() e scanf(). É necessário inclui-la no inicio dos programas usando #include.



## Saída de dados com printf()



A instrução printf() é uma função I/O (entrada e saida) que é utilizada para exibir informações na saída padrão do programa, normalmente o terminal.



Exemplo: printf("Hello, World!");

Saida: Hello, World!



Exemplo 2: 

int idade = 10;



printf("%d", idade);

Saida: 10



## Entrada de dados com scanf()



A instrução scanf() também é uma função I/O (entrada e saida) que é utilizada para ler dados digitados no teclado

int idade;



printf("Digite sua idade:\\n ");

scanf("%d", \&idade);



printf("Sua idade e: %d", idade);



Saida: 

Digite sua idade:

&#x20;10

Sua idade e: 10



O operador \& antes da variável informa ao scanf() o endereço de memória onde o valor lido deverá ser armazenado.



## Especificadores de formato



|Especificador|Tipo|Exemplo|
|-|-|-|
|%d|int|7|
|%f|float|4.16|
|%lf|double|3.14159|
|%c|char|A|





## Caracteres de escape



|Códigos |Significado|
|-|-|
|\\n|nova linha|
|\\t|tabulação|
|\\'|Aspas simples (apóstrofo)|
|\\"|Aspas dupla|





## 



