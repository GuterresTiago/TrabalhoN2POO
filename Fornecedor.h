#pragma once


#ifndef Fornecedor_H
#define Fornecedor_H
#include "Pessoa.h"
class Fornecedor : public Pessoa
{
public:
	Fornecedor(string n, string e, string t, float vc, float vd);
	void Info();
	void ObterSaldo();
	void Setcredito(float c);
	void Setdivida(float d);

	float Getsaldo();
	
private:
	float valor_credito;
	float valor_divida;
	float saldo;

};
#endif
