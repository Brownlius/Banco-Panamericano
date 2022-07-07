#include "Arquivos_de_cabecalho/Conta.hpp"

Conta::Conta(std::string numeroConta, float aporte, Titular titular) : numeroConta(numeroConta), Titular(titular), aporte(aporte)
{
	std::cout << " Conta Criada!" << std::endl;
	saldo += aporte;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar < 0) {
		std::cout << " Não pode depositar valor negativo" << std::endl;
		return;
	}
	saldo += valorADepositar;
	std::cout << " Deposito realizado com sucesso!\n Saldo atual da conta é: " << saldo << std::endl;
}

void Conta::sacar(float valorASacar) {
	if (valorASacar > saldo) {
		std::cout << " Saldo insuficiente." << std::endl;
		return;
	}
	saldo -= valorASacar;
	std::cout << " Saque realizado com sucesso!\n Saldo atual da conta é: " << saldo << std::endl;

}

void Conta::mostraDadosConta() {

	std::cout << "O saldo da Conta é: " << recuperaSaldo() << std::endl;
}

