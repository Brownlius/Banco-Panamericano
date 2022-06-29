#pragma once
#include <iostream>
#include <string>

class Banco
{
	
public:

	void depositar();
	void sacar();
	void mostraInfo();

protected:

	std::string nomeCompleto, nomeMae, endereco;
	char tipoConta;
	float aporte = 0, saldo = 0, saque = 0;

	bool depositoInvalido = true;
};

