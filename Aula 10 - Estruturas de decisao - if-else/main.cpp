#include <iostream>

/*
O comando "if-else" em C++ � uma estrutura de sele��o que permite 
a execu��o de diferentes a��es de acordo com a avalia��o de uma express�o l�gica.
 
Se a express�o for avaliada como verdadeira (true), 
o bloco de c�digo associado ao "if" ser� executado; 

caso contr�rio, o bloco de c�digo associado ao "else" ser� executado.
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




