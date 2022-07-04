#pragma once
#include <string>
#include <iostream>
#include "Titular.hpp"


template<int taxaSaque>
class Conta
{
public:

	Conta(std::string numeroConta, char tipoConta, Titular titular) : numeroConta(numeroConta), tipoConta(tipoConta), titular(titular), saldo(0)
	{
		std::cout << "Conta Criada!" << std::endl;
	}
	

	float recuperaSaldo() const {
		return saldo;
	}
private:

	Titular titular;
	std::string numeroConta;
	char tipoConta = ' ';
protected:
	
	float saldo;
};

