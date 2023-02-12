#include <iostream>

/*
Constantes s�o variveis cujos valores s�o apenas para leitura (read-only)
ou seja uma vez atribu�do o valor � constante ele n�o poder� mais ser alterado.

A atribui��o do valor � constante � obrigat�rio no momento da sua declara��o.

Em C++, existem duas maneiras de se declarar constantes:

1� maneira -> atrav�s da utiliza��o de vari�veis read-only:
- Utiliza-se a palavra reservada `const`
const <tipo> <NOME_DA_CONSTANTE> = <valor>

 
2� maneira -> atrav�s da utiliza��o de diretivas de compila��o.
Desta forma o valor da constante � atribuida ao nome antes da execu��o do programa
Por�m o compilador n�o faz verifica��o de tipos
- Utiliza-se a direiva `#define`
#define <NOME_DA_CONSTANTE> <valor>

Por conven��o o nome de constantes s�o declarados com todas as letras maiusculas.
*/


//Declarando constantes em forma de diretivas de compila��o
#define ALTURA 1.81
int main(){
	 
	//Declarando constantes em forma de vari�veis read-only 
	const int NUMERO_DA_SORTE = 21;
	const double CONSTANTE_MATEMATICA = 434.665;
	const char PRIMEIRA_LETRA_NOME = 'J';
	
	return 0;
}

/*
A menos que haja um motivo relevante 
para enviar uma diretiva para o compilador
utilizar o metodo variavel read-only.
*/

