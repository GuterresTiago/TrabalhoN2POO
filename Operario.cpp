#include "Operario.h"


Operario::Operario(string n, string e, string t, float s, float a)
{
	nome = n;
	endereco = e;
	telefone = t;
	salariobase = s;
	valorproduto = a;
	Calcularsalario(s);
}

void Operario::Calcularsalario(float s)
{
	salariobase = s;
	if (salariobase <= 2000)
	{
		salariol = salariobase+comissao;
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
void Operario::Setproduto(float v)
{
	valorproduto = v;
	comissao = valorproduto * 0.3;
	Calcularsalario(salariobase);

}
float Operario::GetValorp()
{
	return valorproduto;
}
float Operario::Getsalario()
{
	return salariol;
}
float Operario::Getimposto()
{
	return imposto;
}