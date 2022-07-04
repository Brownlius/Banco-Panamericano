#include "../Arquivos_de_cabecalho/Titular.hpp"


Titular::Titular(Cpf numero, std::string nomeCompleto, std::string nomeMae)
	: numero(numero), nomeCompleto(nomeCompleto), nomeMae(nomeMae)
{

	std::cout << "Titular criado com sucesso!" << std::endl;
}