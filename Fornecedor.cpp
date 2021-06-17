#include "Fornecedor.h"

Fornecedor::Fornecedor(string n, string e, string t, float vc, float vd)
{
	nome = n;
	endereco = e;
	telefone = t;
	valor_credito = vc;
	valor_divida = vd;
	ObterSaldo();
}
float Fornecedor::Getsaldo()
{
	return saldo;
}
void Fornecedor::ObterSaldo()
{
	saldo = valor_credito - valor_divida;
	
}
void Fornecedor::Setdivida(float d)
{
	valor_divida = d;
	ObterSaldo();
}
void Fornecedor::Setcredito(float c)
{
	valor_credito=c;
	ObterSaldo();
}

void Fornecedor::Info()
{
	cout << "Nome: "       << nome << endl;
	cout << "Edereco: "    << endereco << endl;
	cout << "Telefone: "   << telefone << endl;
	cout << "Saldo atual: "<< saldo << endl;
}
