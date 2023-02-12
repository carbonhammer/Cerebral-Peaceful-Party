#include <iostream>

/*
Para que seja possivel guardar um valor dentro de uma variavel � necess�rio
utilizar os operadores de atribui��o:
*/

int main(){
	
	//Atribui��o simples( = )
	int numero = 50; 
	// A partir de agora a variavel `numero` passa a representar o valor atribuido a ela.
	std::cout << numero << "\n\n";
	
	
	//Soma com atribui��o
	numero += 1;
	// A partir de agora a variavel `numero` passa a representar o valor 51
	//Pois foi realizada uma soma e em seguida a atribui��o do resultado da opera��o
	std::cout << numero << "\n\n";
	
	
	//Subtra��o com atribui��o
	numero -= 11;// A partir de agora a variavel `numero` passa a representar o valor 40
	//Pois foi realizada uma subtra��o e em seguida a atribui��o do resultado da opera��o
	std::cout << numero << "\n\n";


	//Multiplica��o com atribui��o
	numero *= 2;// A partir de agora a variavel `numero` passa a representar o valor 80
	//Pois foi realizada uma multiplica��o e em seguida a atribui��o do resultado da opera��o
	std::cout << numero << "\n\n";
	
	//Divis�o com atribui��o
	numero /= 8;// A partir de agora a variavel `numero` passa a representar o valor 10
	//Pois foi realizada uma divis�o e em seguida a atribui��o do resultado da opera��o
	std::cout << numero << "\n\n";

	//Modulo com atribui��o
	numero %= 3;// A partir de agora a variavel `numero` passa a representar o valor 1
	//Pois foi realizada um modulo e em seguida a atribui��o do resultado da opera��o
	std::cout << numero << "\n\n";
	
	return 0;
}
