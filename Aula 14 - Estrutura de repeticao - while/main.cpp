#include <iostream>

/*
A estrutura while executa um bloco de codigo
enquanto determinada condi��o for verdadeira.

while(condi�ao){
	//bloco
	//  de
	//comandos
}
*/

int main(){
	
	//Variaveis para estruturar a condi��o
	int x = 0;
	int y = 0;
	int z = 0;


	while(z <= 0){
		std::cout << "Escolha um valor para X: ";
		std::cin >> x;
		
		std::cout << "Escolha um valor para Y: ";
		std::cin >> y;
		
		z = x + y;
		
		if(z > 0 && z <= 100){
			break;
		}else{
			z = 0;
		}
	}
	
	std::cout << "O valor foi aceito: "<< z << "\n\n";
	
	return 0;
}
