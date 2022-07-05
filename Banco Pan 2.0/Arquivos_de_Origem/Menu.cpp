
#include <iostream>
#include <string>
#include "../Arquivos_de_cabecalho/Conta.hpp"
#include "../Arquivos_de_cabecalho/CCorrente.hpp"
#include "../Arquivos_de_cabecalho/CPoupanca.hpp"

void mostraMenu() {

	std::cout << "\n 1) Criar conta -> " << std::endl;
	std::cout << "\n 2) Depositar dinheiro -> " << std::endl;
	std::cout << "\n 3) Sacar dinheiro -> " << std::endl;
	std::cout << "\n 4) Acessar conta -> " << std::endl;
	std::cout << "\n 5) Sair ->" << std::endl;
}

void criaConta()
{
	std::string nomeCompleto, cpf, nomeMae, endereco;
	char tipoConta;
	float aporte, saldo = 0;

	bool tipoContaInvalida = true;
	std::cout << "\n Insira seu nome: " << std::endl;
	std::cin.ignore();
	std::cin >> nomeCompleto;

	std::cout << "\n Insira seu CPF: " << std::endl;
	std::cin.ignore();
	std::cin >> cpf;

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

		Titular titular(Cpf(cpf), nomeCompleto, endereco, nomeMae);


		if (tipoConta == 'p' || tipoConta == 'P') {
			tipoContaInvalida = false;
			CPoupanca cointa("13.69833-0", 'P', titular);

		}
		else if (tipoConta == 'c' || tipoConta == 'C') {
			tipoContaInvalida = false;
			CCorrente cointa("10.69833-0", 'C', titular);
		}
		else {
			std::cout << "\nOpção inválida! Tente novamente\n";
		}
	}

	std::cout << "Aporte inicial: " << std::endl;
	std::cin >> aporte;
	saldo += aporte;


}

void escolhasMenu()
{
	int escolhaNoMenu;
	char opcao = ' ';
	do
	{
		mostraMenu();
		std::cout << "\n";
		std::cin >> escolhaNoMenu;

		switch (escolhaNoMenu)
		{
		case 1:
			std::cout << "\n 1) Criar conta <- " << std::endl;
			criaConta();
			break;
		case 2:

			std::cout << "\n 2) Depositar dinheiro <- " << std::endl;
			break;

		case 3:
			std::cout << "\n 3) Sacar dinheiro <- " << std::endl;
			break;

		case 4:
			std::cout << "\n 4) Acessar conta <- " << std::endl;
			break;

		case 5:
			exit(1);

		default:
		{
			std::cout << "Escolha uma opcao válida! " << std::endl;
			break;
		}
	}

		std::cout << "Deseja continuar navegando? Sim(S) ou N�o(N): " << std::endl;
		std::cin.ignore();
		std::cin >> opcao;

		if ((opcao == 'n') || (opcao == 'N')) {
			exit(0);

		}
	} while ((opcao == 's') || (opcao == 'S'));
}

