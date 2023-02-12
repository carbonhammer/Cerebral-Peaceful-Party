#include <iostream>

/*

O QUE � UMA VARIAVEL?
- � um espa�o na mem�ria onde armazenamos uma determinada informa��o.
- Em C++ as vari�veis devem ser identificadas com o seu tipo e o seu nome.

TIPOS POSS�VEIS EM C++:
- int -> Armazena valores inteiros como: 0 , 1 , 99 , 500 , -50 , -1
- float -> Armazena valores reais como: 0.00 , 0.1 , -3.14 , -50
- double -> Armazena valores reais com precis�o maior que o tipo float
- char -> Armazena um �nico caractere como: 'a' , '*' , '+' , 'w'
- bool -> Armazena valores l�gicos: true ou false

COMO DECLARAR UMA VARI�VEL?
<tipo> <nome da variavel> = (opcional a atribui��o do valor);

*/

int main(){
	
	//Declarando vari�veis do tipo inteiro
	int primeiroNumero = 0;
	int segundoNumero = -1;
	int terceiroNumero = 99;
	
	//Declarando vari�veis do tipo float
	float realX = 9.5;
	float realY = -0.5;
	float realZ	= 5.905;
	
	//Declarando vari�veis do tipo double
	double dbA = 5.90;
	double dbB = -100.75;
	double dbC = 0.00001;
	
	//Declarando variaveis do tipo char
	//Estas vari�veis devem ter seus valores declarados entre aspas simples
	char letra1 = 'C';
	char letra2 = '+';
	char letra3 = '+';
	
	//Declarando vari�veis do tipo bool
	bool logica1 = true;
	bool logica2 = false;
		
	return 0;
}

