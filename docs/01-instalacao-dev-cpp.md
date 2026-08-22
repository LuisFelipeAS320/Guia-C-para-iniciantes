# Instalação do Dev-C++



## O que é o Dev-C++?



O Dev-C++ é um ambiente de desenvolvimento integrado (IDE) usado para escrever e testar programas na linguagem C e C++. Algumas de suas distribuições incluem o compilador GCC por meio do MinGW, permitindo compilar os programas diretamente pela IDE.



## Download



Para fazer o download do Dev-C++, acesse essa página https://sourceforge.net/projects/orwelldevcpp/ e faça o download



## Instalação



Após concluir o download, abra o instalador do Dev-C++.



1\. Selecione o idioma que será utilizado durante a instalação.

2\. Leia e aceite os termos da licença para continuar.

3\. Selecione os componentes que deseja instalar. Para este guia, você pode manter a configuração padrão.

4\. Escolha o local onde o Dev-C++ será instalado ou mantenha o diretório sugerido pelo instalador.

5\. Inicie a instalação e aguarde a conclusão.

6\. Após a instalação, abra o Dev-C++ para realizar a configuração inicial.



## Criando o primeiro programa



Após instalar e abrir o Dev-C++, podemos criar nosso primeiro programa em C.



1\. No menu superior, clique em \*\*Arquivo (File)\*\*.

2\. Selecione \*\*Novo (New)\*\* e depois \*\*Arquivo Fonte (Source File)\*\*.

3\. Digite o seguinte código:



\#include <stdio.h>



int main() {

&#x20;   printf("Hello, World!");



&#x20;   return 0;

}



Salve o arquivo utilizando a extensão .c, por exemplo: hello-world.c.



\[Neste momento, não é necessário entender cada parte do código. Os elementos utilizados serão explicados nos próximos módulos do guia.]

## Compilando e executando



Após escrever e salvar o programa, precisamos compilá-lo antes de executá-lo.



A compilação é o processo de transformar o código escrito em C em um arquivo executável que o computador consegue executar. O compilador também verifica se existem erros no código que impedem a criação do programa.



No Dev-C++, acesse o menu \*\*Executar\*\* e selecione \*\*Compilar \& Executar\*\*. Também é possível utilizar a tecla \*\*F11\*\* como atalho.



Se o código estiver correto, o programa será compilado e uma janela será aberta exibindo:



Hello, World!





