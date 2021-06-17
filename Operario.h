#pragma once
#include "Empregado.h"
#ifndef Operario_H
#define Operario_H
class Operario:public Empregado
{
public:
	Operario(string n, string e, string t, float s, float a);
	void Setproduto(float v);
	void Calcularsalario(float s);

	float GetValorp();
	float Getsalario();
	float Getimposto();
private:
	float valorproduto;
	float comissao;
};
#endif
