#include <iostream>

/*
Os operadores l�gicos em C++ s�o usados para realizar opera��es l�gicas 
em express�es booleanas. Aqui est�o os principais operadores l�gicos em C++:

Operador && (AND l�gico): Retorna verdadeiro se ambas 
as express�es forem verdadeiras.

Operador || (OR l�gico): Retorna verdadeiro
se pelo menos 
uma das express�es for verdadeira.

Operador ! (NOT l�gico): Inverte o valor booleano de 
uma express�o. Se a express�o for verdadeira, o operador ! 
retornar� falso. Se a express�o for falsa, o operador ! retornar� verdadeiro.
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
