#pragma once
#include "./Cpf.hpp"
#include <string>
#include <iostream>

class Titular : Cpf
{
private: //Variáveis
	std::string nomeCompleto, nomeMae, endereco;

public: //Construtor
	Titular(Cpf numero, std::string nomeCompleto, std::string endereco, std::string nomeMae);
	void mostraDadosTitular();

public: //getters
	
	std::string getNomeCompleto() {
		return nomeCompleto;
	}
	std::string getNomeMae() {
		return nomeMae;
	}
	std::string getEndereco() {
		return endereco;
	}
};



