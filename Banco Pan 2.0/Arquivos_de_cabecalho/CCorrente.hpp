#pragma once
#include <string>
#include <iostream>
#include "Conta.hpp"

class CCorrente final : public Conta<5>
{
public:
	CCorrente(std::string numeroConta, char tipoConta, Titular titular);
	void transferePara(Conta& destino, float valor);
};

