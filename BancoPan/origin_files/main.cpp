#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include "../header_files/Banco.hpp"

using namespace std;

void cabecalho()
{
	cout << "\n ------------------Banco PanAmericano------------------ " << endl;
	cout << " ------------------------------------------------------ " << endl;
	cout << " -------------Seja Bem-Vindo ao seu Banco-------------- " << endl;
	cout << " ------------------------------------------------------ " << endl;
}

void mostrarMenu()
{
	

	cout << "\n 1) Criar conta -> " << endl;
	cout << "\n 2) Depositar dinheiro -> " << endl;
	cout << "\n 3) Sacar dinheiro -> " << endl;
	cout << "\n 4) Acessar conta -> " << endl;
	cout << "\n 5) Sair ->" << endl;

}

void escolhasMenu(Banco& obj, int escolhaNoMenu)
{

	
}

int main() {

	int escolhaNoMenu;
	Banco obj;
	char option = ' ';

	cabecalho();

	do
	{

		mostrarMenu();
		cout << "\n";
		cin >> escolhaNoMenu;

	
		switch (escolhaNoMenu)
		{
		case (1):
			cout << "\n 1) Criar conta <- " << endl;
			obj.criaConta();
			break;
		case (2):
			cout << "\n 2) Depositar dinheiro <- " << endl;
			obj.depositar();
			break;
		case (3):
			cout << "\n 3) Sacar dinheiro <- " << endl;
			obj.sacar();
			break;
		case (4):
			cout << "\n 4) Acessar conta <- " << endl;
			obj.mostraInfo();
			break;
		case (5):
			if (escolhaNoMenu == 5) {
				exit(1);
			}
		default:
			cout << "Escolha uma opção válida! " << endl;
			break;
		}

		cout << "Deseja continuar navegando? Sim(S) ou Não(N): " << endl;
		cin.ignore();
		cin >> option;

		if ((option == 'n') || (option == 'N')) {
			exit(0);
		}
	} while ((option == 's') || (option == 'S'));
	







	return 0;
}