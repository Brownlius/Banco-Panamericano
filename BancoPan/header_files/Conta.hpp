#pragma once
#include <string>
#include <iostream>

class Conta 
{
public:	

	Conta(std::string nomeCompleto, std::string nomeMae, std::string endereco, char tipoConta, float aporte);

	void mensagemCriacaoConta();
	float getsaldo();

private:
	char opcaoContinua = ' ';
	bool repeteAporte = true;
	bool repeteOpcao = true;
	bool tipoContaInvalida = true;

protected:

	std::string nomeCompleto, nomeMae, endereco;
	char tipoConta;
	float aporte, saldo = 0;
};

