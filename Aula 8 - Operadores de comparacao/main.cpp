#include <iostream>

/*
Os operadores de comparação permitem realizar uma operação logica e retornam
true ou false caso os valores seja iguais ou não, repectivamente.

Os resultados destas operações não retornam as palavras true ou false, mas sim
os numeros 1 para representar true e 0 para representar false.

Portanto as variaveis podem ser declaradas tanto como bool como int
*/

int main(){
	
	//Igual a (==): Retorna verdadeiro se os valores forem iguais.
	bool checarIgualdade1 = (5 == 5);
	std::cout << "O numero 5 e igual a 5: " << checarIgualdade1 << "\n"; // True (1)
	bool checarIgualdade2 = (5 == 4);
	std::cout << "O numero 5 e igual a 4: " << checarIgualdade2 << "\n\n";// False (0)
	
	
	//Diferente de (!=): Retorna verdadeiro se os valores forem diferentes.
	bool checarDiferenca1 = (5 != 10);
	std::cout << "O numero 5 e diferente de 10: " << checarDiferenca1 << "\n";
	bool checarDiferenca2 = (5 != 5);
	std::cout << "O numero 5 e diferente de 5: " << checarDiferenca2 << "\n\n";
	
		
	//Maior que (>): Retorna verdadeiro se o primeiro valor é maior que o segundo.
	bool checarMaior1 = (10 > 1);
	std::cout << "O numero 10 e maior que 1: " << checarMaior1 << "\n";
	bool checarMaior2 = (10 > 20);
	std::cout << "O numero 10 e maior que 1: " << checarMaior2 << "\n\n";
	
	
	//Menor que (<): Retorna verdadeiro se o primeiro valo é menor que o segundo.
	bool checarMenor1 = (2 < 5);
	std::cout << "O numero 2 e menor que 5: " << checarMenor1 << "\n";
	bool checarMenor2 = (5 < 2);
	std::cout << "O numero 5 e menor que 2: " << checarMenor2 << "\n\n";
	
		
	//Maior ou igual a (>=): Retorna verdadeiro se o primeiro valor é maior ou igual ao segundo.
	bool checarMaiorIgual1 = (4 >= 1);
	std::cout << "O numero 4 e maior ou igual a 1: " << checarMaiorIgual1 << "\n";
	bool checarMaiorIgual2 = (4 >= 4);
	std::cout << "O numero 4 e maior ou igual a 4: " << checarMaiorIgual2 << "\n";
	bool checarMaiorIgual3 = (4 >= 8);
	std::cout << "O numero 4 e maior ou igual a 8: " << checarMaiorIgual3 << "\n\n";


	//Menor ou igual a (<=): Retorna verdadeiro se o primeiro valor é menor ou igual ao segundo.
	bool checarMenorIgual1 = (2 <= 4);
	std::cout << "O numero 2 e menor ou igual a 4: " << checarMenorIgual1 << "\n";
	bool checarMenorIgual2 = (2 <= 2);
	std::cout << "O numero 2 e menor ou igual a 2: " << checarMenorIgual2 << "\n";
	bool checarMenorIgual3 = (2 <= 1);
	std::cout << "O numero 2 e menor ou igual a 1: " << checarMenorIgual3 << "\n\n";
	
		
	return 0;
}











