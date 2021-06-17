#pragma once

#include "Empregado.h"
#ifndef Admin_H
#define Admin_H
class Admin:public Empregado
{
public:
	Admin(string n, string e, string t, float s, float a);
	void Calcularsalario(float s);
	void Setajudac(float v);

	float Getajudac();
	float Getsalario();
	float Getimposto();
private:
	float ajudadecusto;
};
#endif
