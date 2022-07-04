#include <iostream>
#include <string>
#include "Arquivos_de_cabecalho/Titular.hpp"
#include "Arquivos_de_cabecalho/Conta.hpp"
#include "Arquivos_de_cabecalho/Cpf.hpp"
#include "Arquivos_de_cabecalho/CCorrente.hpp"

using namespace std;

void mostraMenu() {

	std::cout << "\n 1) Criar conta -> " << std::endl;
	std::cout << "\n 2) Depositar dinheiro -> " << std::endl;
	std::cout << "\n 3) Sacar dinheiro -> " << std::endl;
	std::cout << "\n 4) Acessar conta -> " << std::endl;
	std::cout << "\n 5) Sair ->" << std::endl;
}


int main() 
{

	Titular titular(Cpf("04315965610"), "Pedro Almeida", "Marlene Souza");
	CCorrente cointa("69833-0", 'P', titular);


	Titular titular2(Cpf("25005618195"), "Palerberto Almeida", "Antônieta Souza");
	CCorrente cointa2("69833-0", 'P', titular);


	

	
	
	
	
	
	

	
	
	
	
	return 0;
}