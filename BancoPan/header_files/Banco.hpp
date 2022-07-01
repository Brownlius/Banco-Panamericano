#pragma once
#include <iostream>
#include <string>

class Banco 
{

public:

	void depositar(float deposito);
	void sacar();
	void mostraInfo();
	void perguntaSeQuerContinuar();
private:

	bool depositoInvalido = true;
	bool saqueInvalido = true;
	float saque = 0;
protected:

	std::string nomeCompleto, nomeMae, endereco;
	char tipoConta;
	float aporte, saldo = 0;
public:

	void setNome(std::string nomeCompleto) {
		this->nomeCompleto = nomeCompleto;
	}
	void setNomeMae(std::string nomeMae) {
		this->nomeMae = nomeMae;
	}
	void setEndereco(std::string endereco) {
		this->endereco = endereco;
	}
	void setTipoConta(char tipoConta) {
		this->tipoConta = tipoConta;
	}
	void setSaldo(float saldo, float valorSet) {
		this->saldo = saldo + valorSet;
	}
public:

	std::string getNomeCompleto() {
		return nomeCompleto;
	}
	std::string getNomeMae() {
		return nomeMae;
	}
	std::string getEndereco() {
		return endereco;
	}
	char getTipoConta() {
		return tipoConta;
	}
	float getSaldo() {
		return saldo;
	}
};

