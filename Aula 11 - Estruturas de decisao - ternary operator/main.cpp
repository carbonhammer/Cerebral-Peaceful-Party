#include <iostream>

/*
O operador ternario é uma forma compacta de se escrever uma estrutura 
de decisão if-else.

É uma estrutura que permite apenas 2 opções de resultados

A composição desta estrutura é 

expressão-lógica ? expressão1 : expressão2;

*/

int main(){
	
	//Criando variaveis para realizar a operação logica
	int X = 120;
	int Y = 241;
	
	//Criando uma variavel para receber o resultado da expressão lógica
	bool resultado;
	
	
	//Atribuindo o operador ternario à variável
	resultado = ((X * 2) == Y) ? true : false;
	
	
	//Trocando o valor booleano para um texto
	std::string resultadoTexto = (resultado == true) ? "Verdadeiro" : "Falso";
	
	
	//Verificando o resultado
	std::cout << "Resultado: " << resultadoTexto << "\n";	
	
	return 0;
}
