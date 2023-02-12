#include <iostream>

/*
O comando "if-else" em C++ é uma estrutura de seleção que permite 
a execução de diferentes ações de acordo com a avaliação de uma expressão lógica.
 
Se a expressão for avaliada como verdadeira (true), 
o bloco de código associado ao "if" será executado; 

caso contrário, o bloco de código associado ao "else" será executado.
*/

int main(){
	
	int numero_1 = 50;
	int numero_2 = 100;
	
	if(numero_1 == numero_2){
		std::cout << "Os numeros sao iguais" << "\n";
	}
	
	else if(numero_1 != numero_2){
		std::cout << "Os numeros sao diferentes" << "\n";
	}
	
	else{
		std::cout << "Os numeros sao iguais" << "\n";
	}
	
	return 0;		
}




