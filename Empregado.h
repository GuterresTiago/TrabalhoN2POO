#pragma once

#ifndef Empregado_H
#define Empregado_H
#include "Pessoa.h"

class Empregado : public Pessoa
{
public:
	Empregado();
	
    virtual	void Calcularsalario(float s);
	virtual void Info();

	float Getsalario();
	float Getimposto();

protected:
	int Setcodigo();
	int static codigo;
	float salariobase;
	float imposto;
	float salariol;
};

#endif