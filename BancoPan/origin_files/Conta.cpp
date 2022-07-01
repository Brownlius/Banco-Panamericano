#include "../header_files/Conta.hpp"

int qtdContasCriadas = 0;


void Conta::criaConta() 
{
	Conta conta;
	std::cout << "\n Insira seu nome: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeCompleto;
	setNome(nomeCompleto);

	std::cout << " Insira o nome da sua m�e: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeMae;
	setNomeMae(nomeMae);

	std::cout << " Digite seu endere�o: " << std::endl;
	std::cin.ignore();
	std::cin >> endereco;
	setEndereco(endereco);

	while (tipoContaInvalida) {

		std::cout << " Qual tipo de conta deseja abrir:\n Poupan�a(P) ou Corrente(C)? " << std::endl;
		std::cin.ignore();
		std::cin >> tipoConta;
		setTipoConta(tipoConta);

		if (tipoConta == 'p' || tipoConta == 'P' || tipoConta == 'c' || tipoConta == 'C') {
			tipoContaInvalida = false;
		}
		else {
			std::cout << "\nOp��o inv�lida! Tente novamente\n";
		}
	}

	std::cout << "Aporte inicial: " << std::endl;
	std::cin >> aporte;

	conta.depositar(aporte);
	mensagemCriacaoConta();

		
	qtdContasCriadas++;
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