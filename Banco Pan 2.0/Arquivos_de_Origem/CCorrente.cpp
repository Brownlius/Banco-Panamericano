#include "../Arquivos_de_cabecalho/CCorrente.hpp"

CCorrente::CCorrente(std::string numeroConta, char tipoConta, float saldo, Titular titular) : Conta(numeroConta, tipoConta, saldo, titular)
{
	std::cout << "\nConta Corrente criada!" << std::endl;
}

