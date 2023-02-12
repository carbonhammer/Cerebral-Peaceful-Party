#include <iostream>

/*
O switch � usado em C++ para avaliar uma express�o 
e fazer a correspond�ncia com diferentes casos 
especificados em uma lista de case.
*/

int main(){
	
	//Criando uma variavel para ser verificada
	int opcao;
	
	//Criando um menu de opcoes
	std::cout << "Orcamentos - Pressione 1" << "\n";
	std::cout << "Reclamacoes - Pressione 2" << "\n";
	std::cout << "Encerrar - Pressione 0" << "\n";
	std::cout << "Escolha uma opcao: " << "\n";
	
	//Criano uma entrada de dados no console
	std::cin >> opcao;

	//Come�ando a estrutura condicional switch
	switch(opcao){
		case 1: 
			std::cout << "Voce recebera o formulario de solicitacao de  orcamento\n"; 
			std::cout << "no seu email em alguns instantes";
			break;
		case 2:
			std::cout << "Preencha o formulario de reclamacoes, por favor" << "\n";
			break;
		case 0:
			std::cout << "Obrigado, atendimento finalizado\n";
			break;
		default:
			std::cout << "Obrigado, atendimento finalizado! At� a proxima\n";
	}
	
	return 0;
}








