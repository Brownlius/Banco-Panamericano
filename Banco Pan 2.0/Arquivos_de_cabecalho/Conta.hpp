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
	enum resultadoSaque {
		sucesso, valorNegativo, saldoInsuficiente
	};


	Conta(std::string numeroConta, char tipoConta, Titular titular) : numeroConta(numeroConta), tipoConta(tipoConta), titular(titular), saldo(0)
	{
		std::cout << "Conta Criada!" << std::endl;
	}
	
	float recuperaSaldo() const {
		return saldo;
	}

	std::variant<resultadoSaque, float>sacar(float valorASacar) {
		std::cout << "Chamando método sacar da conta corrente" << std::endl;

		if (valorASacar < 0) {
			std::cout << "Não pode sacar valor negativo" << std::endl;
			return valorNegativo;
		}

		float tarifa = valorASacar * (taxaSaque / 100);
		float valorSaque = valorASacar + tarifa;

		if (valorSaque > saldo) {
			std::cout << "Saldo insuficiente" << std::endl;
			return saldoInsuficiente;
		}
				
		saldo -= valorSaque;
		return saldo;
	}

	void depositar(float valorADepositar) {
		if (valorADepositar < 0) {
			std::cout << "Não pode sacar valor negativo" << std::endl;
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

	