#include <iostream>

/*
Os operadores lógicos em C++ são usados para realizar operações lógicas 
em expressões booleanas. Aqui estão os principais operadores lógicos em C++:

Operador && (AND lógico): Retorna verdadeiro se ambas 
as expressões forem verdadeiras.

Operador || (OR lógico): Retorna verdadeiro
se pelo menos 
uma das expressões for verdadeira.

Operador ! (NOT lógico): Inverte o valor booleano de 
uma expressão. Se a expressão for verdadeira, o operador ! 
retornará falso. Se a expressão for falsa, o operador ! retornará verdadeiro.
*/

int main(){
	
	bool checkAND = (2 == 2 && 4 == 4);
	std::cout << "checkAND : " << checkAND << "\n";
	
	bool checkOR = (5 == 5 || 3 == 2);
	std::cout << "checkOR : " << checkOR << "\n";
	
	bool checkNOT = !(5 == 4);
	std::cout << "checkNOT : " << checkNOT << "\n";	
	
	return 0;
}
