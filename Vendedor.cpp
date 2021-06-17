#include "Vendedor.h"


Vendedor::Vendedor(string n, string e, string t, float s, float v)
{
	nome = n;
	endereco = e;
	telefone = t;
	salariobase = s;
	valorvendas = v;
	Setvenda(v);
	Calcularsalario(s);
}

void Vendedor::Calcularsalario(float s)
{
	salariobase = s;
	if (salariobase <= 2000)
	{
		salariol = salariobase + comissao;
		imposto = 0;
	}
	if (salariobase > 2000 && salariobase <= 4000)
	{
		salariol = salariobase - (salariobase * 0.15) + comissao;
		imposto = salariobase - salariol;
	}
	if (salariobase > 4000 && salariobase <= 8000)
	{
		salariol = salariobase - (salariobase * 0.20) + comissao;
		imposto = salariobase - salariol;
	}
	if (salariobase > 8000)
	{
		salariol = salariobase - (salariobase * 0.27) + comissao;
		imposto = salariobase - salariol;
	}
}
float Vendedor::Getsalario()
{
	return salariol;
}
float Vendedor::Getimposto()
{
	return imposto;
}
float Vendedor::Getvalorv()
{
	return valorvendas;
}
void Vendedor::Setvenda(float v)
{
	valorvendas= v;
	comissao = valorvendas * 0.2;
	Calcularsalario(salariobase);
}