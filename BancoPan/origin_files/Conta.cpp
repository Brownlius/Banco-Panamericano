#include "../header_files/Conta.hpp"


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

	std::cout << " Qual tipo de conta deseja abrir:\n Poupança(P) ou Corrente(C)? " << std::endl;
	std::cin.ignore();
	std::cin >> tipoConta;

	std::cout << "Aporte inicial: " << std::endl;
	std::cin >> aporte;
	saldo = saldo + aporte;
	std::cout << "\tSua conta foi criada com sucesso! " << std::endl;
}