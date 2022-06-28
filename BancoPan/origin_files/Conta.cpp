#include "../header_files/Conta.hpp"
bool invalido = false;

//Conta::Conta(std::string nomeCompleto, std::string nomeMae, std::string endereco, int tipoConta, float aporte) :
//	Banco(nomeCompleto, nomeMae, endereco, tipoConta, aporte)
//{
void Conta::criaConta ()
{
	std::cout << "\n Insira seu nome: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeCompleto;

	std::cout << " Insira o nome da sua mãe: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeMae;

	std::cout << " Digite seu endereço: " << std::endl;
	std::cin.ignore();
	std::cin >> endereco;

	while (invalido == false) {

		std::cout << " Qual tipo de conta deseja abrir:\n Poupança(P) ou Corrente(C)? " << std::endl;
		std::cin.ignore();
		std::cin >> tipoConta;

		if (tipoConta == 'p' || tipoConta == 'P' || tipoConta == 'c' || tipoConta == 'C') {
			invalido = true;

		}else {
			std::cout << "\nOpção inválida! Tente novamente\n";
			
		}
	}
	std::cout << "Aporte inicial: " << std::endl;
	std::cin >> aporte;
	saldo = saldo + aporte;
	mensagemCriacaoConta();
	std::cout << "\tO saldo inicial da conta é: " << getsaldo() << std::endl;

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