#pragma once
#include <string>
#include <iostream>
#include "../header_files/Banco.hpp"

class Conta: public Banco
{
public:	

	//Conta(std::string nomeCompleto, std::string nomeMae, std::string endereço, int tipoConta, float aporte);
	void criaConta();

};

