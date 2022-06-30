#include "../header_files/Banco.hpp"

void Banco::depositar()
{

	int deposito = 0;

	while (depositoInvalido) {

		std::cout << "Quanto deseja depositar?" << std::endl;
		std::cin >> deposito;

		if (deposito < 0) {
			std::cout << "Valor inválido! insira valor correto." << std::endl;
		}
		else {
			depositoInvalido = false;
			saldo = saldo + deposito;
		}

		std::cout << "Seu saldo atual é de : " << saldo << std::endl;
	}
}

void Banco::sacar()
{

	while (saqueInvalido) {

		std::cout << "Quanto deseja sacar? " << std::endl;
		std::cin >> saque;

		if (saque > saldo) {
			std::cout << "Saldo insuficiente! Tente Novamente." << std::endl;

		}
		else if (saque <= 0) {
			std::cout << "Valor de saque inválido" << std::endl;
		}
		else {
			saqueInvalido = false;
			saldo = saldo - saque;
		}
		
		std::cout << "Seu saldo atual é de : " << saldo << std::endl;
	}
}

void Banco::mostraInfo()
{
	std::cout << "Nome titular: "<< nomeCompleto << std::endl;

	std::cout << "Nome da mãe: " << nomeMae<< std::endl;

	std::cout << "Endereço do titular: " << endereco << std::endl;

	std::cout << "Sua conta é : " << tipoConta << std::endl;

	std::cout << "Seu saldo é: " << saldo << std::endl;
}
