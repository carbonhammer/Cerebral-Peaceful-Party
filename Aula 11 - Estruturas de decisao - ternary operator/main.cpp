#include <iostream>

/*
O operador ternario � uma forma compacta de se escrever uma estrutura 
de decis�o if-else.

� uma estrutura que permite apenas 2 op��es de resultados

A composi��o desta estrutura � 

express�o-l�gica ? express�o1 : express�o2;

*/

int main(){
	
	//Criando variaveis para realizar a opera��o logica
	int X = 120;
	int Y = 241;
	
	//Criando uma variavel para receber o resultado da express�o l�gica
	bool resultado;
	
	
	//Atribuindo o operador ternario � vari�vel
	resultado = ((X * 2) == Y) ? true : false;
	
	
	//Trocando o valor booleano para um texto
	std::string resultadoTexto = (resultado == true) ? "Verdadeiro" : "Falso";
	
	
	//Verificando o resultado
	std::cout << "Resultado: " << resultadoTexto << "\n";	
	
	return 0;
}
