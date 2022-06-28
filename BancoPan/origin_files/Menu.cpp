#include "../header_files/Menu.hpp"

char opcao = ' ';

void mostrarMenu()
{

	std::cout << "\n 1) Criar conta -> " << std::endl;
	std::cout << "\n 2) Depositar dinheiro -> " << std::endl;
	std::cout << "\n 3) Sacar dinheiro -> " << std::endl;
	std::cout << "\n 4) Acessar conta -> " << std::endl;
	std::cout << "\n 5) Sair ->" << std::endl;

}

void escolhasMenu()
{
	
	int escolhaNoMenu;

	do
	{
		Conta obj;
		mostrarMenu();
		std::cout << "\n";
		std::cin >> escolhaNoMenu;

		switch (escolhaNoMenu)
		{
		case 1:
		{
			std::cout << "\n 1) Criar conta <- " << std::endl;

			obj.criaConta();
			break;
		}
		case 2:
		{
			std::cout << "\n 2) Depositar dinheiro <- " << std::endl;
			obj.depositar();
			break;
		}
		case 3:
		{
			std::cout << "\n 3) Sacar dinheiro <- " << std::endl;
			obj.sacar();
			break;
		}
		case 4:
		{
			std::cout << "\n 4) Acessar conta <- " << std::endl;
			obj.mostraInfo();
			break;
		}
		case 5:
		{
			if (escolhaNoMenu == 5) {
				mostraDespedida();
				exit(1);
			}
		}
		default:
		{
			std::cout << "Escolha uma opção válida! " << std::endl;
			break;
		}
		}

		std::cout << "Deseja continuar navegando? Sim(S) ou Não(N): " << std::endl;
		std::cin.ignore();
		std::cin >> opcao;

		if ((opcao == 'n') || (opcao == 'N')) {

			mostraDespedida();
			exit(0);

		}
	} while ((opcao == 's') || (opcao == 'S'));

}

