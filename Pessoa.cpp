#include "Pessoa.h"

Pessoa::Pessoa(string n)
{
	nome = n;
}

void Pessoa::Setnome(string n)
{
	nome = n;
}
void Pessoa::Setendereco(string n)
{
	endereco = n;
}
void Pessoa::Settelefone(string n)
{
	telefone = n;
}

string Pessoa::Getnome()
{
	return nome;
}
string Pessoa::Getendereco()
{
	return endereco;
}string Pessoa::Gettelefone()
{
	return telefone;
}

void Pessoa::Info()
{
	cout << "Nome: "    << nome << endl;
	cout << "Edereco: " << endereco << endl;
	cout << "Telefone: "    << telefone << endl;
}
