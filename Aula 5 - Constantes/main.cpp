#include <iostream>

/*
Constantes são variveis cujos valores são apenas para leitura (read-only)
ou seja uma vez atribuído o valor à constante ele não poderá mais ser alterado.

A atribuição do valor à constante é obrigatório no momento da sua declaração.

Em C++, existem duas maneiras de se declarar constantes:

1ª maneira -> através da utilização de variáveis read-only:
- Utiliza-se a palavra reservada `const`
const <tipo> <NOME_DA_CONSTANTE> = <valor>

 
2ª maneira -> através da utilização de diretivas de compilação.
Desta forma o valor da constante é atribuida ao nome antes da execução do programa
Porém o compilador não faz verificação de tipos
- Utiliza-se a direiva `#define`
#define <NOME_DA_CONSTANTE> <valor>

Por convenção o nome de constantes são declarados com todas as letras maiusculas.
*/


//Declarando constantes em forma de diretivas de compilação
#define ALTURA 1.81
int main(){
	 
	//Declarando constantes em forma de variáveis read-only 
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

