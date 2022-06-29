#include "../header_files/Menu.hpp"

char opcao = ' ';
Conta obj;

void escolhasMenu()
{


	int escolhaNoMenu;
	

	do
	{
		mostrarMenu();
		std::cout << "\n";
		std::cin >> escolhaNoMenu;

		switch (escolhaNoMenu)
		{
		case 1:
			std::cout << "\n 1) Criar conta <- " << std::endl;
			obj.criaConta();
			break;

		case 2:
		
			std::cout << "\n 2) Depositar dinheiro <- " << std::endl;

			if (obj.criaConta()) {
				obj.depositar();
				break;
			}
			else{
				std::cout << "Nenhuma conta encontrada! Favor criar conta primeiro." << std::endl;
					break;
				}
		case 3:
			std::cout << "\n 3) Sacar dinheiro <- " << std::endl;
			
			if (obj.criaConta()) {
				obj.sacar();
				break;
			}
			else {
				std::cout << "Nenhuma conta encontrada! Favor criar conta primeiro." << std::endl;
				break;
			}

		case 4:
			std::cout << "\n 4) Acessar conta <- " << std::endl;
			if (obj.criaConta()) {
				obj.mostraInfo();
				break;
			}
			else {
				std::cout << "Nenhuma conta encontrada! Favor criar conta primeiro." << std::endl;
				break;
			}
		
		case 5:
			if (escolhaNoMenu == 5) {
				mostraDespedida();
				exit(1);
			}
		
		default:
		{
			std::cout << "Escolha uma op��o v�lida! " << std::endl;
			break;
		}
		}

		std::cout << "Deseja continuar navegando? Sim(S) ou N�o(N): " << std::endl;
		std::cin.ignore();
		std::cin >> opcao;

		if ((opcao == 'n') || (opcao == 'N')) {

			mostraDespedida();
			exit(0);

		}
	} while ((opcao == 's') || (opcao == 'S'));

}

