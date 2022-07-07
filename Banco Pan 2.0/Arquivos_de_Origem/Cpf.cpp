#include "../Arquivos_de_cabecalho/Cpf.hpp"

Cpf::Cpf(std::string numero) : numero(numero)
{
	validaCpf();
}



void Cpf::validaCpf() {
	if (recuperaCpfnumero().length() < 11 || recuperaCpfnumero().length() > 11) {
		std::cout << "CPF inválido" << std::endl;
		return;
	}
	else {
		std::cout << "CPF criado com sucesso!" << std::endl;
	}
}