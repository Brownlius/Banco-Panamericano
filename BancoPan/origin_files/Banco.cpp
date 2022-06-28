#include "../header_files/Banco.hpp"

//Banco::Banco(std::string nomeCompleto, std::string nomeMae, std::string endereco, char tipoConta, float aporte) :
//	nomeCompleto(nomeCompleto), nomeMae(nomeMae), endereco(endereco), tipoConta(tipoConta), aporte(aporte)
//{
//
//}


void Banco::depositar() 
{
	int deposito;
	std::cout<< "Quanto deseja depositar?" << std::endl;
	std::cin >> deposito;

	saldo = saldo + deposito;
	
	std::cout << "Seu saldo atual � de : " << saldo << std::endl;
}

void Banco::sacar() 
{
	
	std::cout << "Quanto deseja sacar? " << std::endl;
	std::cin >> saque;

	if(saque > saldo){
		std::cout << "Saldo insuficiente" << std::endl;
		sacar();
	}else if (saque <= 0) {
		std::cout <<"Valor de saque inv�lido" << std::endl;
		sacar();
	}
	saldo = saldo - saque;

	std::cout << "Seu saldo atual � de : " << saldo << std::endl;
}

void Banco::mostraInfo()
{
	std::cout << "Nome titular: "<< nomeCompleto << std::endl;

	std::cout << "Nome da m�e: " << nomeMae<< std::endl;

	std::cout << "Endere�o do titular: " << endereco << std::endl;

	std::cout << "Sua conta � : " << tipoConta << std::endl;

	std::cout << "Seu saldo �: " << saldo << std::endl;
}
