#include "../header_files/Banco.hpp"

void Banco::depositar(float valorADepositar)
{
	bool depositoInvalido = true;

	while (depositoInvalido) {

		std::cout << "Quanto deseja depositar?" << std::endl;
		std::cin >> valorADepositar;

		if (valorADepositar < 0) {
			std::cout << "Valor inválido! insira valor correto." << std::endl;
			perguntaSeQuerContinuar();
		}
	}
}

		

void Banco::sacar()
{

	while (saqueInvalido) {

		std::cout << "Quanto deseja sacar? " << std::endl;
		std::cin >> saque;

		if (saque > getSaldo()) {
			std::cout << "Saldo insuficiente! Tente Novamente." << std::endl;
			perguntaSeQuerContinuar();
		}
		else if (saque <= 0) {
			std::cout << "Valor de saque inválido" << std::endl;
			perguntaSeQuerContinuar();
		}
		else {
			setSaldo(getSaldo(), (saque * -1));
			saqueInvalido = false;
		}
		
		std::cout << "Seu saldo atual é de : " << getSaldo() << std::endl;
	}
}

void Banco::mostraInfo()
{
	std::cout << "Nome titular: " << getNomeCompleto() << std::endl;

	std::cout << "Nome da mãe: " << getNomeMae() << std::endl;

	std::cout << "Endereço do titular: " << getEndereco() << std::endl;

	std::cout << "Sua conta é : " << getTipoConta() << std::endl;

	std::cout << "Seu saldo é: " << getSaldo() << std::endl;
}

void Banco::perguntaSeQuerContinuar() {

	bool repeteOpcao = true;
	char opcaoContinua = ' ';

	while (repeteOpcao) {
		std::cout << "Deseja tentar novamente? Sim(S) ou Não(N)" << std::endl;
		std::cin >> opcaoContinua;

	if (opcaoContinua == 'S' || opcaoContinua == 's') {
		repeteOpcao = false;
	}else if (opcaoContinua == 'N' || opcaoContinua == 'n') {
		repeteOpcao = false;
	}else if() {
		std::cout << "\nOpção inválida! Tente novamente\n" << std::endl;
		repeteOpcao = true;
	}else{
			depositoInvalido = false;
			setSaldo(getSaldo(), valorADepositar);
		}
	}
	std::cout << "Seu saldo atual é de : " << getSaldo() << std::endl;
}