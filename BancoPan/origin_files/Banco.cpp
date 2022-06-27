#include "../header_files/Banco.hpp"

void Banco::criaConta()
{
	std::cout << "\n Insira seu nome: " << std::endl;
	std::cin.ignore();
	std::cin.getline(nomeCompleto,70);	

	std::cout << " Insira o nome da sua mãe: " << std::endl;
	std::cin.ignore();
	std::cin.getline(nomeMae, 70);

	std::cout << " Digite seu endereço: " << std::endl;
	std::cin.ignore();
	std::cin.getline(endereço, 70);

	std::cout << " Qual tipo de conta deseja abrir:\n Poupança(P) ou Corrente(C)? " << std::endl;
	std::cin.ignore();
	std::cin.getline(tipoConta, 70);

	std::cout << "Aporte inicial: " << std::endl;
	std::cin >> aporte;

	std::cout << "\tSua conta foi criada com sucesso! " << std::endl;
}

void Banco::depositar() 
{
	int deposito;
	std::cout<< "Quanto deseja depositar?" << std::endl;
	std::cin >> deposito;

	saldo = saldo + deposito;
	
	std::cout << "Seu saldo atual é de : " << saldo << std::endl;
}

void Banco::sacar() 
{
	
	std::cout << "Quanto deseja sacar? " << std::endl;
	std::cin >> saque;

	if(saque > saldo){
		std::cout << "Saldo insuficiente" << std::endl;
		sacar();
	}else if (saque <= 0) {
		std::cout <<"Valor de saque inválido" << std::endl;
		sacar();
	}
	saldo = saldo - saque;

	std::cout << "Seu saldo atual é de : " << saldo << std::endl;
}

void Banco::mostraInfo()
{
	std::cout << "Nome titular: "<< nomeCompleto << std::endl;

	std::cout << "Nome da mãe: " << nomeMae<< std::endl;

	std::cout << "Endereço do titular: " << endereço << std::endl;

	std::cout << "Sua conta é : " << tipoConta << std::endl;

	std::cout << "Seu saldo é: " << saldo << std::endl;
}
