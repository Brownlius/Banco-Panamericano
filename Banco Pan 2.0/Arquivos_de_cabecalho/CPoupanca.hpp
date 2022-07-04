#pragma once
#include <string>
#include <iostream>
#include "Conta.hpp"
#include "Arquivos_de_cabecalho/Titular.hpp"

class CPoupanca final : public Conta<2>
{
public:
	CPoupanca(std::string numeroConta, char tipoConta, Titular titular);
};

