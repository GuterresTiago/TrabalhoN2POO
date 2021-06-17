#include "Empregado.h"

int Empregado::codigo = 0;

Empregado::Empregado()
{
	Setcodigo();
}

float Empregado::Getsalario()
{
	return salariol;
}
float Empregado::Getimposto()
{
	return imposto;
}

void Empregado::Calcularsalario(float s)
{
	salariobase = s;

	if (salariobase <= 2000)
	{
		salariol = salariobase;
		imposto = 0;
	}
	if (salariobase > 2000 && salariobase <= 4000)
	{
		salariol = salariobase - salariobase * 0.15;
		imposto = salariobase - salariol;
	}
	if (salariobase > 4000 && salariobase <= 8000)
	{
		salariol = salariobase - salariobase * 0.20;
		imposto = salariobase - salariol;
	}
	if (salariobase > 8000)
	{
		salariol = salariobase - salariobase * 0.27;
		imposto = salariobase - salariol;
	}

}
int Empregado::Setcodigo()
{
	codigo++;
	return codigo;
}
void Empregado::Info()
{
	cout << "Nome: " << nome << endl;
	cout << "Edereco: " << endereco << endl;
	cout << "Telefone: " << telefone << endl;
	cout << "Salario bruto: " << salariobase << endl;
	cout << "Salario liquido: " << salariol << endl;
	cout << "Imposto: " << imposto << endl;
	cout << "Codigo: \n" << codigo << endl;
}
