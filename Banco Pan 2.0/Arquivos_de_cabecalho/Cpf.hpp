#pragma once
#include <string>
#include <iostream>
class Cpf
{
public:
	void validaCpf();
	explicit Cpf(std::string numero);
	std::string recuperaCpfnumero() const {
		return numero;
	}

private:

	 std::string numero;
};

