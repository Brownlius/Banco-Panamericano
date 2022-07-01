#pragma once
#include <string>
#include <iostream>
#include "Banco.hpp"

class Conta : Banco
{
public:	

	void mensagemCriacaoConta();
	float getsaldo();
	void criaConta();
private:

	bool repeteAporte = true;
	bool tipoContaInvalida = true;

};

