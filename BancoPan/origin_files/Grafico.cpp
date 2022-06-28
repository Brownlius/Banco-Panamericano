#include <iostream>

void mostraCabecalho()
{
	std::cout << "\n ------------------Banco PanAmericano------------------ " << std::endl;
	std::cout << " ------------------------------------------------------ " << std::endl;
	std::cout << " -------------Seja Bem-Vindo ao seu Banco-------------- " << std::endl;
	std::cout << " ------------------------------------------------------ " << std::endl;
}

void mostraDespedida()
{
	std::cout << "\n ------------------Banco PanAmericano------------------ " << std::endl;
	std::cout << " ----------------Agradece a sua visita----------------- " << std::endl;
	std::cout << " ------------------------------------------------------ " << std::endl;
	std::cout << " ---------------------Volte Sempre--------------------- " << std::endl;
}

void mostrarMenu()
{

	std::cout << "\n 1) Criar conta -> " << std::endl;
	std::cout << "\n 2) Depositar dinheiro -> " << std::endl;
	std::cout << "\n 3) Sacar dinheiro -> " << std::endl;
	std::cout << "\n 4) Acessar conta -> " << std::endl;
	std::cout << "\n 5) Sair ->" << std::endl;

}