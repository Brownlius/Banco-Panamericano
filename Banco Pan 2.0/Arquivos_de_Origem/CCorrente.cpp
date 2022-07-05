#include "../Arquivos_de_cabecalho/CCorrente.hpp"

CCorrente::CCorrente(std::string numeroConta, char tipoConta, Titular titular) : Conta(numeroConta, tipoConta, titular)
{
	std::cout << "\nConta Corrente criada!" << std::endl;
}

void CCorrente::transferePara(Conta& destino, float valor)
{
	auto resultado = sacar(valor);

	if (resultado.index() == 1) {
		destino.depositar(valor);
	}
}