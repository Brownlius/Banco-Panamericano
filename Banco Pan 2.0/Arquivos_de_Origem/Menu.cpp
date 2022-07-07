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
			mostraDespedida();
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

	float aporte = 0;

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

	std::cout << " Aporte inicial: " << std::endl;
	std::cin >> aporte;

	Titular titular(Cpf(cpf), nomeCompleto, endereco, nomeMae);
	Conta cointa("13-168490", aporte, titular);

	std::cout << " O saldo da conta é: " << aporte << std::endl;
	std::cout << " Conta criada com sucesso. \n Acesse as funcionalidade do nosso banco" << std::endl;
	segundoMenu(cointa);
}
	void segundoMenu(Conta& conta) {
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
				std::cout << " Quanto deseja depositar? " << std::endl;
				float valorADepositar;
				std::cin >> valorADepositar;
				conta.depositar(valorADepositar);
				break;

			case 2:
				std::cout << "\n 2) Sacar dinheiro <- " << std::endl;
				std::cout << " Quanto deseja sacar? " << std::endl;
				float valorASacar;
				std::cin >> valorASacar;
				conta.sacar(valorASacar);
				break;

			case 3:
				std::cout << "\n 3) Acessar conta <- " << std::endl;
				std::cout << " Os dados de sua conta: " << std::endl;
				conta.mostraDadosTitular();
				conta.mostraDadosConta();
				
				break;

			case 4:
				mostraDespedida();
				exit(1);

			default:
			{
				std::cout << " Escolha uma opcao válida! " << std::endl;
				break;
			}
			}

			std::cout << " Deseja continuar navegando? Sim(S) ou Não(N): " << std::endl;
			std::cin.ignore();
			std::cin >> opcao;

			if ((opcao == 'n') || (opcao == 'N')) {
				mostraDespedida();
				exit(0);

			}
		} while ((opcao == 's') || (opcao == 'S'));
	}



	






	