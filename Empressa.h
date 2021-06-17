#pragma once
#include "Vendedor.h"
#include "Admin.h"
#include "Fornecedor.h"
#include "Operario.h"
#ifndef Empressa_H
#define Empressa_H
#include <vector>
class Empressa
{
public:
	void addvende(string n, string e, string t, float s, float v);
	void addadm(string n, string e, string t, float s, float v);
	void addfornece(string n, string e, string t, float s, float v);
	void addoperario(string n, string e, string t, float s, float v);

	void Info();


private:
	void Balancofi();
	string nome;
	vector<Vendedor>vendedores;
	vector<Admin>adm;
	vector<Fornecedor>fornecedores;
	vector<Operario>operarios;
	float receita;
	float custos;
	float credor;
	float impostos;
};
#endif
