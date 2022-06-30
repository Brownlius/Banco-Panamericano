#pragma once
#include <iostream>
#include <string>
#include "Conta.hpp"

class Banco : public Conta
{

public:

	void depositar();
	void sacar();
	void mostraInfo();

private:
	bool depositoInvalido = true;
	bool saqueInvalido = true;
	float saque = 0;
};

