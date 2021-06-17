#include "Admin.h"


Admin::Admin(string n, string e, string t, float s, float a)
{
	nome = n;
	endereco = e;
	telefone = t;
	salariobase = s;
	ajudadecusto = a;
	Calcularsalario(s);
}

void Admin::Calcularsalario(float s)
{
	salariobase = s;
	if (salariobase <= 2000)
	{
		salariol = salariobase + ajudadecusto;
		imposto = 0;
	}
	if (salariobase > 2000 && salariobase <= 4000)
	{
		salariol = salariobase - (salariobase * 0.15) + ajudadecusto;
		imposto = salariobase - salariol;
	}
	if (salariobase > 4000 && salariobase <= 8000)
	{
		salariol = salariobase - (salariobase * 0.20) + ajudadecusto;
		imposto = salariobase - salariol;
	}
	if (salariobase > 8000)
	{
		salariol = salariobase - (salariobase * 0.27) + ajudadecusto;
		imposto = salariobase - salariol;
	}
}
float Admin::Getsalario()
{
	return salariol;
}
float Admin::Getimposto()
{
	return imposto;
}
float Admin::Getajudac()
{
	return ajudadecusto;
}

void Admin::Setajudac(float v)
{
	ajudadecusto = v;
	Calcularsalario(salariobase);
}