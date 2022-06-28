#pragma once
#include <iostream>
#include <string>

class Banco
{
	
public:
	//Banco(std::string nomeCompleto, std::string nomeMae, std::string endereco, char tipoConta, float aporte);
	void depositar();
	void sacar();
	void mostraInfo();

protected:
	std::string nomeCompleto, nomeMae, endereco;
	char tipoConta;
	float aporte = 0, saldo = 0, saque = 0;
};

