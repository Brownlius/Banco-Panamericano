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

	std::cout << " Insira o nome da sua mãe: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeMae;

	std::cout << " Digite seu endereço: " << std::endl;
	std::cin.ignore();
	std::cin >> endereco;

	while (tipoContaInvalida) {

		std::cout << " Qual tipo de conta deseja abrir:\n Poupança(P) ou Corrente(C)? " << std::endl;
		std::cin.ignore();
		std::cin >> tipoConta;

		if (tipoConta == 'p' || tipoConta == 'P' || tipoConta == 'c' || tipoConta == 'C') {
			tipoContaInvalida = false;
		}
		else{
			std::cout << "\nOpção inválida! Tente novamente\n";
			}
		}

	while(repeteAporte){

		std::cout << "Aporte inicial: " << std::endl;
		std::cin >> aporte;

		if (aporte > 0) {
			saldo = saldo + aporte;
			mensagemCriacaoConta();
			std::cout << "\tO saldo da conta é: " << getsaldo() << std::endl;
			return true;
		}
		else {
			while (repeteOpcao) {

				std::cout << "Valor inválido! Favor depositar valor válido." << std::endl;
				std::cout << "Deseja tentar novamente? Sim(S) ou Não(N)" << std::endl;
				std::cin >> opcaoContinua;

				}if (opcaoContinua == 'S' || opcaoContinua == 's') {
					repeteAporte = true;
				}
				else if (opcaoContinua == 'N' || opcaoContinua == 'n') {
					repeteAporte = false;
					
				}
				else {
					std::cout << "\nOpção inválida! Tente novamente\n" << std::endl;
					repeteOpcao = true;
				}
		}
	}
}
	
	

void Conta::mensagemCriacaoConta() {

	if (tipoConta == 'p' || tipoConta == 'P') {
		std::cout << "\tSua conta poupança foi criada com sucesso! " << std::endl;
	}
	else if (tipoConta == 'c' || tipoConta == 'C') {
		std::cout << "\tSua conta corrente foi criada com sucesso! " << std::endl;
	}
}

float Conta::getsaldo() {
	return saldo;
}