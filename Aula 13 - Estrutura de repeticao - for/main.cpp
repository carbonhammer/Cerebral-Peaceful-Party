#include <iostream>

/*
A estrutura de repeti��o for em C++ permite que voc� 
execute um bloco de c�digo repetidamente, 
com base em uma condi��o pr�-definida. 

A primeira etapa � a inicializa��o, onde ir� ficar a variavel que
ir� contar quantas vezes o bloco de comando foi repetido.

A segunda etapa � a condi��o para que as repeti��es do bloco de comandos
seja parada

A terceira e ultima � o incremento ou atualiza��o do contador, 
variavel de inicializa��o. A cada vez que o bloco de comandos � 
executado a variavel de inicializa��o � incrementada em 1 ate bater
na condi��o de parada.

for (inicializa��o; condi��o; atualiza��o) {
		
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












