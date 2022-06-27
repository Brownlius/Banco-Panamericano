#pragma once
#include <iostream>

class Banco
{
	
public:
	void criaConta();
	void depositar();
	void sacar();
	void mostraInfo();
private:
	char nomeCompleto[50], nomeMae[50], endereço[100], tipoConta[10];
	float aporte, saldo, saque;
};

