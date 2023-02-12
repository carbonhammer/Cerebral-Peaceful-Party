#include <iostream>

/*
Para que seja possivel guardar um valor dentro de uma variavel é necessário
utilizar os operadores de atribuição:
*/

int main(){
	
	//Atribuição simples( = )
	int numero = 50; 
	// A partir de agora a variavel `numero` passa a representar o valor atribuido a ela.
	std::cout << numero << "\n\n";
	
	
	//Soma com atribuição
	numero += 1;
	// A partir de agora a variavel `numero` passa a representar o valor 51
	//Pois foi realizada uma soma e em seguida a atribuição do resultado da operação
	std::cout << numero << "\n\n";
	
	
	//Subtração com atribuição
	numero -= 11;// A partir de agora a variavel `numero` passa a representar o valor 40
	//Pois foi realizada uma subtração e em seguida a atribuição do resultado da operação
	std::cout << numero << "\n\n";


	//Multiplicação com atribuição
	numero *= 2;// A partir de agora a variavel `numero` passa a representar o valor 80
	//Pois foi realizada uma multiplicação e em seguida a atribuição do resultado da operação
	std::cout << numero << "\n\n";
	
	//Divisão com atribuição
	numero /= 8;// A partir de agora a variavel `numero` passa a representar o valor 10
	//Pois foi realizada uma divisão e em seguida a atribuição do resultado da operação
	std::cout << numero << "\n\n";

	//Modulo com atribuição
	numero %= 3;// A partir de agora a variavel `numero` passa a representar o valor 1
	//Pois foi realizada um modulo e em seguida a atribuição do resultado da operação
	std::cout << numero << "\n\n";
	
	return 0;
}
