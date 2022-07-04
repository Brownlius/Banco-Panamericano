#include "../Arquivos_de_cabecalho/Cpf.hpp"

Cpf::Cpf(std::string numero) : numero(numero)
{
	validaCpf();
}

std::string Cpf::recuperaNumero() const {
	return numero;
}

void Cpf::validaCpf() {
	if (recuperaNumero().length() < 11 || recuperaNumero().length() > 11) {
		std::cout << "CPF inválido" << std::endl;
		return;
	}
	else {
		std::cout << "CPF criado com sucesso!" << std::endl;
	}
}