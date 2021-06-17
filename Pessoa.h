#pragma once

#ifndef Pessoa_H
#define Pessoa_H
using namespace std;
#include <iostream>

class Pessoa
{
public:
	Pessoa() {};
	Pessoa(string n);

	string Getnome();
	string Getendereco();
	string Gettelefone();

	void Setnome(string n);
	void Setendereco(string n);
	void Settelefone(string n);

	virtual void Info();

protected:
	string nome;
	string endereco;
	string telefone;

};

#endif