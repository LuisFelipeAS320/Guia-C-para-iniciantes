# Estruturas de decisão



## O que são estruturas de decisão?



As estruturas de decisão permitem que um programa execute diferentes ações dependendo de uma condição. Dessa forma, o programa pode tomar decisões com base nos valores fornecidos pelo usuário ou nos resultados de comparações.



Em C, algumas das principais estruturas de decisão são if, if...else, else if e switch.



## if



A estrutura if é utilizada quando queremos executar um bloco de código somente se uma determinada condição for verdadeira.



Sua estrutura básica é:



if (condicao) {

&#x20;   // Código executado se a condição for verdadeira

}



Por exemplo:



int idade = 20;



if (idade >= 18) {

&#x20;   printf("Voce e maior de idade.");

}



Nesse exemplo, o programa verifica se o valor da variável idade é maior ou igual a 18. Se a condição idade >= 18 for verdadeira, a mensagem será exibida.



Caso a condição seja falsa, o bloco de código dentro do if não será executado.

## if...else



A estrutura else pode ser utilizada junto ao if quando queremos definir uma ação para o caso em que a condição seja falsa.



int idade = 16;



if (idade >= 18) {

&#x20;   printf("Voce e maior de idade.");

} else {

&#x20;   printf("Voce e menor de idade.");

}



Nesse caso, se idade >= 18 for verdadeira, o primeiro bloco será executado. Caso seja falsa, o bloco do else será executado.



Dessa forma, o programa possui dois caminhos possíveis, mas apenas um deles será executado.



## else if



Quando precisamos verificar mais de uma condição, podemos utilizar else if.



int nota = 7;



if (nota >= 9) {

&#x20;   printf("Excelente");

} else if (nota >= 7) {

&#x20;   printf("Aprovado");

} else {

&#x20;   printf("Reprovado");

}



As condições são verificadas de cima para baixo. Quando uma condição verdadeira é encontrada, seu bloco é executado e as condições seguintes dessa estrutura não são verificadas.



No exemplo, como nota possui o valor 7, a primeira condição é falsa, mas a condição nota >= 7 é verdadeira. Portanto, o programa exibirá Aprovado.



O else final é utilizado quando nenhuma das condições anteriores for verdadeira.



## switch



A estrutura switch permite selecionar diferentes blocos de código de acordo com o valor de uma expressão. Ela pode ser útil quando temos várias opções específicas para verificar.



Sua estrutura básica é:



switch (expressao) {

&#x20;   case valor1:

&#x20;       // Código

&#x20;       break;



&#x20;   case valor2:

&#x20;       // Código

&#x20;       break;



&#x20;   default:

&#x20;       // Código

}



Por exemplo:



int opcao = 2;



switch (opcao) {

&#x20;   case 1:

&#x20;       printf("Adicionar");

&#x20;       break;



&#x20;   case 2:

&#x20;       printf("Remover");

&#x20;       break;



&#x20;   case 3:

&#x20;       printf("Sair");

&#x20;       break;



&#x20;   default:

&#x20;       printf("Opcao invalida");

}



Nesse exemplo, o switch verifica o valor armazenado em opcao. Como seu valor é 2, o código correspondente ao case 2 será executado.



Cada case representa um valor que pode ser comparado com a expressão do switch.



O break encerra a execução do switch após encontrar e executar o case correspondente. Sem ele, a execução pode continuar para os case seguintes.



O default é opcional e pode ser utilizado para definir o que acontecerá quando nenhum dos valores especificados nos case corresponder ao valor da expressão.



## Utilizando operadores nas condições



As estruturas de decisão são frequentemente utilizadas em conjunto com os operadores relacionais e lógicos apresentados no módulo anterior.



Por exemplo:



if (idade >= 18 \&\& idade <= 60) {

&#x20;   printf("Idade entre 18 e 60 anos.");

}



Nesse caso, o bloco será executado somente se as duas condições forem verdadeiras.



Também é importante lembrar da diferença entre os operadores = e ==:



numero = 10;   // Atribui o valor 10 a numero

numero == 10;  // Compara se numero possui o valor 10



Confundir esses dois operadores pode causar comportamentos inesperados no programa.

