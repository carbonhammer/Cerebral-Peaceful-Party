#include <iostream>

/*

O QUE É UMA VARIAVEL?
- É um espaço na memória onde armazenamos uma determinada informação.
- Em C++ as variáveis devem ser identificadas com o seu tipo e o seu nome.

TIPOS POSSÍVEIS EM C++:
- int -> Armazena valores inteiros como: 0 , 1 , 99 , 500 , -50 , -1
- float -> Armazena valores reais como: 0.00 , 0.1 , -3.14 , -50
- double -> Armazena valores reais com precisão maior que o tipo float
- char -> Armazena um único caractere como: 'a' , '*' , '+' , 'w'
- bool -> Armazena valores lógicos: true ou false

COMO DECLARAR UMA VARIÁVEL?
<tipo> <nome da variavel> = (opcional a atribuição do valor);

*/

int main(){
	
	//Declarando variáveis do tipo inteiro
	int primeiroNumero = 0;
	int segundoNumero = -1;
	int terceiroNumero = 99;
	
	//Declarando variáveis do tipo float
	float realX = 9.5;
	float realY = -0.5;
	float realZ	= 5.905;
	
	//Declarando variáveis do tipo double
	double dbA = 5.90;
	double dbB = -100.75;
	double dbC = 0.00001;
	
	//Declarando variaveis do tipo char
	//Estas variáveis devem ter seus valores declarados entre aspas simples
	char letra1 = 'C';
	char letra2 = '+';
	char letra3 = '+';
	
	//Declarando variáveis do tipo bool
	bool logica1 = true;
	bool logica2 = false;
		
	return 0;
}

