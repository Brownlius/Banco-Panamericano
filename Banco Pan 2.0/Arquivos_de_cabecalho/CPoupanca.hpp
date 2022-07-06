#pragma once
#include <string>
#include <iostream>
#include "Conta.hpp"

class CPoupanca final : public Conta<2>
{
public:
	CPoupanca(std::string numeroConta, char tipoConta, float saldo, Titular titular);
};

