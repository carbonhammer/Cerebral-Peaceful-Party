#include <iostream>

/*
Em C++, as constantes são valores que não mudam durante a execução do programa. 
Há duas maneiras de se declarar constantes em C++: como variáveis read-only 
ou como diretivas de compilação.

Variáveis read-only: Estas são variáveis que são declaradas como constantes usando 
a palavra-chave "const". Uma vez que elas são declaradas como constantes, 
seus valores não podem ser modificados durante a execução do programa. 
Aqui está um exemplo de como se declarar uma constante como uma variável read-only:

const <tipo> <NOME_DA_CONSTANTE> = <valor>;

As diretivas de compilação são utilizadas para fornecer informações ao compilador 
sobre o processo de compilação. Uma dessas diretivas é a diretiva "#define", 
que permite a definição de constantes:

#define NOME "Joao Vitor"

*/

//Como diretiva de compilação
#define NOME_AUTOR "Joao Vitor"

int main(){
	
	//Como variavel read-only
	const int MAX_VALUE = 343;
	const char MAIN_LETTER = 'x';
	
	return 0;
}

