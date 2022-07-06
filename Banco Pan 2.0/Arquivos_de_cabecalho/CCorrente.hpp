#pragma once
#include <string>
#include <iostream>
#include "Conta.hpp"

class CCorrente final : public Conta<5>
{
public:
	CCorrente(std::string numeroConta, char tipoConta, float saldo, Titular titular);

};

