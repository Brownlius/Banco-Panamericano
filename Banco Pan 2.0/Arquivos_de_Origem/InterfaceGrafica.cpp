#include "../Arquivos_de_cabecalho/InterfaceGrafica.hpp"


void mostraDespedida() {
	std::cout << " ----------------------BANCO PANAM----------------------" << std::endl;
	std::cout << " -------------------------------------------------------" << std::endl;
	std::cout << " ---------------------Volte sempre!---------------------" << std::endl;
	std::cout << " -------------------------------------------------------" << std::endl;

}

void mostraSaudacao() {
	std::cout << " ----------------------BANCO PANAM----------------------" << std::endl;
	std::cout << " -------------------------------------------------------" << std::endl;
	std::cout << " ---------------------Seja bem-vindo--------------------" << std::endl;
	std::cout << " -------------------------------------------------------" << std::endl;

}

void mostraMenu() {

	std::cout << "\n 1) Depositar dinheiro -> " << std::endl;
	std::cout << "\n 2) Sacar dinheiro -> " << std::endl;
	std::cout << "\n 3) Acessar conta -> " << std::endl;
	std::cout << "\n 4) Sair ->" << std::endl;
}
void mostraMenuInicial() {
	std::cout << "  Seja bem-vindo! Para ser um de nossos clientes\n\t\tCrie sua conta!" << std::endl;
	std::cout << "\n 1) Criar conta -> " << std::endl;
	std::cout << "\n 2) Sair ->" << std::endl;
}