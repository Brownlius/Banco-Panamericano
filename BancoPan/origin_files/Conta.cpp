#include "../header_files/Conta.hpp"


//Conta::Conta(std::string nomeCompleto, std::string nomeMae, std::string endereco, int tipoConta, float aporte) :
//	Banco(nomeCompleto, nomeMae, endereco, tipoConta, aporte)
//{
bool Conta::criaConta()
{
	return false;

	std::cout << "\n Insira seu nome: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeCompleto;

	std::cout << " Insira o nome da sua m�e: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeMae;

	std::cout << " Digite seu endere�o: " << std::endl;
	std::cin.ignore();
	std::cin >> endereco;

	while (tipoContaInvalida) {

		std::cout << " Qual tipo de conta deseja abrir:\n Poupan�a(P) ou Corrente(C)? " << std::endl;
		std::cin.ignore();
		std::cin >> tipoConta;

		if (tipoConta == 'p' || tipoConta == 'P' || tipoConta == 'c' || tipoConta == 'C') {
			tipoContaInvalida = false;
		}
		else{
			std::cout << "\nOp��o inv�lida! Tente novamente\n";
			}
		}

	while(repeteAporte){

		std::cout << "Aporte inicial: " << std::endl;
		std::cin >> aporte;

		if (aporte > 0) {
			saldo = saldo + aporte;
			mensagemCriacaoConta();
			std::cout << "\tO saldo da conta �: " << getsaldo() << std::endl;
			return true;
		}
		else {
			while (repeteOpcao) {

				std::cout << "Valor inv�lido! Favor depositar valor v�lido." << std::endl;
				std::cout << "Deseja tentar novamente? Sim(S) ou N�o(N)" << std::endl;
				std::cin >> opcaoContinua;

				}if (opcaoContinua == 'S' || opcaoContinua == 's') {
					repeteAporte = true;
				}
				else if (opcaoContinua == 'N' || opcaoContinua == 'n') {
					repeteAporte = false;
					
				}
				else {
					std::cout << "\nOp��o inv�lida! Tente novamente\n" << std::endl;
					repeteOpcao = true;
				}
		}
	}
}
	
	

void Conta::mensagemCriacaoConta() {

	if (tipoConta == 'p' || tipoConta == 'P') {
		std::cout << "\tSua conta poupan�a foi criada com sucesso! " << std::endl;
	}
	else if (tipoConta == 'c' || tipoConta == 'C') {
		std::cout << "\tSua conta corrente foi criada com sucesso! " << std::endl;
	}
}

float Conta::getsaldo() {
	return saldo;
}