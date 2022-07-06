#include <iostream>
#include <string>
#include "../Arquivos_de_cabecalho/Menu.hpp"

void menuInicial() {
	int escolhaNoMenu;
	bool opcaoValida = true;

	while (opcaoValida) {

		mostraMenuInicial();
		std::cout << "\n";
		std::cin >> escolhaNoMenu;

		switch (escolhaNoMenu)
		{
		case 1:
			std::cout << "\n 1) Criar conta <- " << std::endl;
			criaConta();
			opcaoValida = false;
			break;

		case 2:
			exit(1);
			break;
		default:
		{
			std::cout << "Escolha uma opcao válida! " << std::endl;
			break;
		}
		}
	}
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

	Titular titular(Cpf(cpf), nomeCompleto, endereco, nomeMae);

	while (tipoContaInvalida) {
		std::cout << " Qual tipo de conta deseja abrir:\n Poupança(P) ou Corrente(C)? " << std::endl;
		std::cin.ignore();
		std::cin >> tipoConta;

		switch (tipoConta)
		{
		case 1:
				tipoContaInvalida = false;
				CPoupanca cointa("13.69833-0", 'P', saldo, titular);
				break;
			
		case 2:
				tipoContaInvalida = false;
				CCorrente cointa("10.69833-0", 'C', saldo, titular);
				break;
		default:
		{
				std::cout << "\nOpção inválida! Tente novamente\n";
		}
		}
	}

	std::cout << "Aporte inicial: " << std::endl;
	std::cin >> aporte;
	saldo += aporte;

	std::cout << "O saldo da conta é: " << saldo << std::endl;
	std::cout << "Conta criada com sucesso. Acesse as funcionalidade do nosso banco" << std::endl;
	
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
			std::cout << "\n 1) Depositar dinheiro <- " << std::endl;
			std::cout << "Quanto deseja depositar? " << std::endl;
			float valorADepositar;
			std::cin >> valorADepositar;
			cointa.depositar(1550);
			break;

		case 2:
			std::cout << "\n 2) Sacar dinheiro <- " << std::endl;

			break;

		case 3:
			std::cout << "\n 3) Acessar conta <- " << std::endl;
			break;

		case 4:
			exit(1);

		default:
		{
			std::cout << "Escolha uma opcao válida! " << std::endl;
			break;
		}
		}

		std::cout << "Deseja continuar navegando? Sim(S) ou Não(N): " << std::endl;
		std::cin.ignore();
		std::cin >> opcao;

		if ((opcao == 'n') || (opcao == 'N')) {
			exit(0);

		}
	} while ((opcao == 's') || (opcao == 'S'));
}


	






	