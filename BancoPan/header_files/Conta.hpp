#pragma once
#include <string>
#include <iostream>
#include "../header_files/Banco.hpp"

class Conta: public Banco
{
public:	

	//Conta(std::string nomeCompleto, std::string nomeMae, std::string endereço, int tipoConta, float aporte);
	bool criaConta();
	void mensagemCriacaoConta();
	float getsaldo();

protected:
	char opcaoContinua = ' ';
	bool repeteAporte = true;
	bool repeteOpcao = true;
	bool tipoContaInvalida = true;
};

