#include <iostream>

/*
Em C++, as constantes s�o valores que n�o mudam durante a execu��o do programa. 
H� duas maneiras de se declarar constantes em C++: como vari�veis read-only 
ou como diretivas de compila��o.

Vari�veis read-only: Estas s�o vari�veis que s�o declaradas como constantes usando 
a palavra-chave "const". Uma vez que elas s�o declaradas como constantes, 
seus valores n�o podem ser modificados durante a execu��o do programa. 
Aqui est� um exemplo de como se declarar uma constante como uma vari�vel read-only:

const <tipo> <NOME_DA_CONSTANTE> = <valor>;

As diretivas de compila��o s�o utilizadas para fornecer informa��es ao compilador 
sobre o processo de compila��o. Uma dessas diretivas � a diretiva "#define", 
que permite a defini��o de constantes:

#define NOME "Joao Vitor"

*/

//Como diretiva de compila��o
#define NOME_AUTOR "Joao Vitor"

int main(){
	
	//Como variavel read-only
	const int MAX_VALUE = 343;
	const char MAIN_LETTER = 'x';
	
	return 0;
}

