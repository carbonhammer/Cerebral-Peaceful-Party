#include <iostream>

/*
A estrutura de repetição for em C++ permite que você 
execute um bloco de código repetidamente, 
com base em uma condição pré-definida. 

A primeira etapa é a inicialização, onde irá ficar a variavel que
irá contar quantas vezes o bloco de comando foi repetido.

A segunda etapa é a condição para que as repetições do bloco de comandos
seja parada

A terceira e ultima é o incremento ou atualização do contador, 
variavel de inicialização. A cada vez que o bloco de comandos é 
executado a variavel de inicialização é incrementada em 1 ate bater
na condição de parada.

for (inicialização; condição; atualização) {
		
	/////
	/////
	/////
	/////
	/////	
		
}
*/

int main(){
	
	for(int contador = 1; contador <= 100000 ; contador++){
		std::cout << contador << "\n";
	}
	
	return 0;
}












