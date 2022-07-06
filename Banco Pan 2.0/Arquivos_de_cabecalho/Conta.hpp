#pragma once
#include <string>
#include <iostream>
#include <variant>
#include <utility>
#include "Titular.hpp"


template<int taxaSaque>
class Conta
{
public:
	
	Conta(std::string numeroConta, char tipoConta, float saldo, Titular titular) : numeroConta(numeroConta), tipoConta(tipoConta), titular(titular), saldo(saldo)
	{
		std::cout << "Conta Criada!" << std::endl;
	}
	
	float recuperaSaldo() const {
		return saldo;
	}

	void sacar(float valorASacar) {
		if (valorASacar > saldo) {
			std::cout << "Saldo insuficiente." << std::endl;
			return;
		}
		saldo += valorASacar;
	}

	void depositar(float valorADepositar) {
		if (valorADepositar < 0) {
			std::cout << "Não pode depositar valor negativo" << std::endl;
			return;
		}
		saldo += valorADepositar;
	}
private:

	Titular titular;
	std::string numeroConta;
	char tipoConta = ' ';
protected:
	
	float saldo;
};

	