#include "../Arquivos_de_cabecalho/Titular.hpp"

Titular::Titular(Cpf numero, std::string nomeCompleto, std::string endereco, std::string nomeMae)
	: Cpf(numero), nomeCompleto(nomeCompleto), endereco(endereco), nomeMae(nomeMae)
{

	std::cout << "\nTitular criado com sucesso!" << std::endl;
}

void Titular::mostraDadosTitular() {
	std::cout << "\nTitular �: " << getNomeCompleto() << std::endl;
	std::cout << "\nNome da m�e: " << getNomeMae() << std::endl;
	std::cout << "\nCPF do titular: " << recuperaCpfnumero() << std::endl;
	std::cout << "\nEndere�o Completo: " << getEndereco() << std::endl;

}