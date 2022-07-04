#pragma once
#include <string>
#include <iostream>
class Cpf
{
public:
	void validaCpf();
	explicit Cpf(std::string numero);
	std::string recuperaNumero() const;
private:

	 std::string numero;
};

