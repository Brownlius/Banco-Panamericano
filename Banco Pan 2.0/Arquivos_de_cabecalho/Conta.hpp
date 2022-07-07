#pragma once
#include <string>
#include <iostream>
#include "Titular.hpp"

class Conta : public Titular
{
public:
	Conta(std::string numeroConta, float aporte, Titular titular);
	
	float recuperaSaldo() const {
		return saldo;

	}

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	void mostraDadosConta();
private:
	std::string numeroConta;
	float aporte = 0;
	float saldo = 0;


};

	