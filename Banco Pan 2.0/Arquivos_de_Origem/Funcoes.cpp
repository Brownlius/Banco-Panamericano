#include "../Arquivos_de_cabecalho/Funcoes.hpp"

void Banco::sacar()
{

	while (saqueInvalido) {

		std::cout << "Quanto deseja sacar? " << std::endl;
		std::cin >> saque;

		if (saque > getSaldo()) {
			std::cout << "Saldo insuficiente! Tente Novamente." << std::endl;
			perguntaSeQuerContinuar();
		}
		else if (saque <= 0) {
			std::cout << "Valor de saque inv?lido" << std::endl;
			perguntaSeQuerContinuar();
		}
		else {
			setSaldo(getSaldo(), (saque * -1));
			saqueInvalido = false;
		}

		std::cout << "Seu saldo atual ? de : " << getSaldo() << std::endl;
	}
}	