#include "../Arquivos_de_cabecalho/Titular.hpp"

Titular::Titular(Cpf numero, std::string nomeCompleto, std::string endereco, std::string nomeMae)
	: Cpf(numero), nomeCompleto(nomeCompleto), endereco(endereco), nomeMae(nomeMae)
{

	std::cout << "Titular criado com sucesso!" << std::endl;
}

void Titular::mostraDadosTitular() {
	std::cout << "Titular é: " << getNomeCompleto() << std::endl;
	std::cout << "Nome da mãe: " << getNomeMae() << std::endl;
	std::cout << "CPF do titular: " << recuperaCpfnumero() << std::endl;
	std::cout << "Endereço Completo: " << getEndereco() << std::endl;

}