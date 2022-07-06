#include "../Arquivos_de_cabecalho/CPoupanca.hpp"

CPoupanca::CPoupanca(std::string numeroConta, char tipoConta, float saldo, Titular titular) : Conta(numeroConta, tipoConta, saldo, titular)
{
	std::cout << "\nConta Poupanca criada!" << std::endl;
}


