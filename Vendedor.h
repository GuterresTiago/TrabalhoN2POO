#pragma once


#include "Empregado.h"
#ifndef Vendedor_H
#define Vendedor_H
class Vendedor:public Empregado
{
public:
	Vendedor(string n,string e,string t,float s,float v);
	void Calcularsalario(float s);
	void Setvenda(float v);

	float Getvalorv();
	float Getsalario();
	float Getimposto();
private:
	float valorvendas;
	float comissao;
};
#endif
