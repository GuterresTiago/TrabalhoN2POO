#include "Empressa.h"


void Empressa::addvende(string n, string e, string t, float s, float v)
{
	vendedores.push_back(Vendedor( n,  e,  t,  s,  v));
}
void Empressa::addadm(string n, string e, string t, float s, float v)
{
	adm.push_back(Admin(n, e, t, s, v));
}
void Empressa::addfornece(string n, string e, string t, float s, float v)
{
	fornecedores.push_back(Fornecedor(n, e, t, s, v));
}
void Empressa::addoperario(string n, string e, string t, float s, float v)
{
	operarios.push_back(Operario(n, e, t, s, v));
}

void Empressa::Info()
{
	int a =10,b=0,c=0,d=0,s=0,o=10,t=10,p=10;
	float sala,var;
	string no, nomee, tel, ende;
	while (a != 0)
	{
		cout << "1- Lista de vendedores: " << endl;
		cout << "2- Lista de fornecedores: " << endl;
		cout << "3- Lista de admistradores: " << endl;
		cout << "4- Lista de operarios: " << endl;
		cout << "5- Balanco financeiro: " << endl;
		cout << "6- Atualizar cadastro: " << endl;
		cout << "7- Adicionar pessoa: " << endl;
		cout << "0- Sair: \n" << endl;
		p = 1;
		o = 1;
		cin >> a;

		switch (a)
		{
		case 1:
			
			for (int i = 0; i < vendedores.size(); i++)
			{
				
				vendedores[i].Info();
				cout << "Valor de vendas: " << vendedores[i].Getvalorv() << endl;
				b += vendedores[i].Getimposto();
				b += vendedores[i].Getsalario();

			}
			cout << "Custo total dos vendedores: " << b << endl;
			break;
		case 2:
			
			for (int i = 0; i< fornecedores.size(); i++)
			{
				fornecedores[i].Info();
				s += fornecedores[i].Getsaldo();
			}
			cout << "Saldo total dos fornecedores: " << s << endl;
			break;
		case 3:
			
			for (int i = 0; i < adm.size(); i++)
			{
				adm[i].Info();
				cout << "Valor de ajuda de custos: " << adm[i].Getajudac() << endl;
				c += adm[i].Getimposto();
				c += adm[i].Getsalario();
			}
			cout << "Custo total dos administradores: " << c << endl;
			break;
		case 4:
			
			for (int i = 0; i < operarios.size(); i++)
			{
				operarios[i].Info();
				cout << "Valor de producao: " << operarios[i].GetValorp() << endl;
				d += operarios[i].Getimposto();
				d += operarios[i].Getsalario();
			}
			cout << "Custo total dos operarios: " << d << endl;
			break;
		case 5:
			Balancofi();
			break;
		case 6:
			while (o!=0)
			{
				cout << "1- Vendedores: " << endl;
				cout << "2- Fornecedores: " << endl;
				cout << "3- Admistradores: " << endl;
				cout << "4- Operarios: " << endl;
				cout << "0- Sair: " << endl;
				cin >> o;

				switch (o) 
				{
				case 1:
					for (int i = 0;  i < vendedores.size(); i++)
					{
						cout << "Vendedor nome: " << vendedores[i].Getnome() << endl;
					}
					cout << "Digite o nome do vendedor: " << endl;
					cin >> no;
					for (int i = 0; vendedores.size(); i++)
					{
						if (no == vendedores[i].Getnome()) 
						{
							while (t != 0)
							{
								cout << "1- Atualizar nome: " << endl;
								cout << "2- Atualizar salario: " << endl;
								cout << "3- Atualizar Valor de vendas: " << endl;
								cout << "0- Sair: " << endl;
								cin >> t;
								if (t == 1)
								{
									cout << "Digite novo nome: " << endl;
									cin >> no;
									vendedores[i].Setnome(no);
									cout << "nome atualizado com sucesso: " << vendedores[i].Getnome() << endl;
								}
								if (t == 2)
								{
									cout << "Digite novo salario: " << endl;
									cin >> sala;
									vendedores[i].Calcularsalario(sala);
									cout << "Valor salario atualizado com sucesso: " << vendedores[i].Getsalario() << endl;
								}
								if (t == 3)
								{
									cout << "Digite novo valor vendas: " << endl;
									cin >> sala;
									vendedores[i].Setvenda(sala);
									cout << "Valor venda atualizado com sucesso: " << vendedores[i].Getvalorv() << endl;

								}
							}
						}
						else cout << "nome nao encontrado" << endl;
					}
											
					break;
				case 2:
					for (int i = 0; i < fornecedores.size(); i++)
					{
						cout << "Fornecedore nome: " << fornecedores[i].Getnome() << endl;
					}
					cout << "Digite o nome do Fornecedor: " << endl;
					cin >> no;
					for (int i = 0; fornecedores.size(); i++)
					{
						if (no == fornecedores[i].Getnome()) {

							while (t != 0)
							{
								cout << "1- Atualizar nome: " << endl;
								cout << "2- Atualizar credido: " << endl;
								cout << "3- Atualizar Valor de divida: " << endl;
								cout << "0- Sair: " << endl;
								cin >> t;
								if (t == 1)
								{
									cout << "Digite novo nome: " << endl;
									cin >> no;
									fornecedores[i].Setnome(no);
									cout << "nome atualizado com sucesso: " << fornecedores[i].Getnome() << endl;
								}
								if (t == 2)
								{
									cout << "Digite novo credito: " << endl;
									cin >> sala;
									fornecedores[i].Setcredito(sala);
									cout << "Saldo atualizado com sucesso: " << fornecedores[i].Getsaldo() << endl;
								}
								if (t == 3)
								{
									cout << "Digite novo valor de divida: " << endl;
									cin >> sala;
									fornecedores[i].Setdivida(sala);
									cout << "Saldo atualizado com sucesso: " << fornecedores[i].Getsaldo() << endl;
								}
							}
						}
						else cout << "nome nao encontrado" << endl;
					}
					

					break;
				case 3:
					for (int i = 0; i < adm.size(); i++)
					{
						cout << "Administrador nome: " << adm[i].Getnome() << endl;
					}
					cout << "Digite o nome do Administrador: " << endl;
					cin >> no;
					for (int i = 0; adm.size(); i++)
					{
						if (no == adm[i].Getnome())
						{
							while (t != 0)
							{
								cout << "1- Atualizar nome: " << endl;
								cout << "2- Atualizar salario: " << endl;
								cout << "3- Atualizar Valor de ajuda de custo: " << endl;
								cout << "0- Sair: " << endl;
								cin >> t;
								if (t == 1)
								{	
											cout << "Digite novo nome: " << endl;
											cin >> no;
											adm[i].Setnome(no);
											cout << "nome atualizado com sucesso: " << adm[i].Getnome() << endl;
									
								}
								if (t == 2)
								{							
											cout << "Digite novo salario: " << endl;
											cin >> sala;
											adm[i].Calcularsalario(sala);	
											cout << "valor de salario atualizado com sucesso: " << adm[i].Getsalario() << endl;
								}
								if (t == 3)
								{			
											cout << "Digite novo valor de ajujda de custo: " << endl;
											cin >> sala;
											adm[i].Setajudac(sala);		
											cout << "valor de ajuda de custo atualizado com sucesso: " << adm[i].Getajudac() << endl;
								}
							}
						
						}
						else cout << "nome nao encontrado" << endl;
					}

					break;
				case 4:
					for (int i = 0; i < adm.size(); i++)
					{
						cout << "Operario nome: " << adm[i].Getnome() << endl;
					}
					cout << "Digite o nome do operario: " << endl;
					cin >> no;
					for (int i = 0; operarios.size(); i++)
					{
						if (no == operarios[i].Getnome())
						{
							while (t != 0)
							{
								cout << "1- Atualizar nome: " << endl;
								cout << "2- Atualizar salario: " << endl;
								cout << "3- Atualizar Valor de producao " << endl;
								cout << "0- Sair: " << endl;
								cin >> t;
								if (t == 1)
								{
									cout << "Digite novo nome: " << endl;
									cin >> no;
									operarios[i].Setnome(no);
									cout << "nome atualizado com sucesso: " << operarios[i].Getnome() << endl;

								}
								if (t == 2)
								{
									cout << "Digite novo salario: " << endl;
									cin >> sala;
									operarios[i].Calcularsalario(sala);
									cout << "salario atualizado com sucesso: " << operarios[i].Getsalario() << endl;
								}
								if (t == 3)
								{
									cout << "Digite novo valor de producao: " << endl;
									cin >> sala;
									operarios[i].Setproduto(sala);
									cout << "valor de producao atualizado com sucesso: " << operarios[i].GetValorp() << endl;
								}
							}

						}
						else cout << "nome nao encontrado" << endl;
					}
				default:
					cout << "Opcao invalida!!!" << endl;
					break;
				}
			}
			break;
			case 7:
				while(p!=0)
				cout << "1- Adicionar vendedores: " << endl;
				cout << "2- Adicionar fornecedores: " << endl;
				cout << "3- Adicionar admistradores: " << endl;
				cout << "4- Adicionar operarios: " << endl;
				cout << "0- sair: " << endl;
				cin >> p;
				if (p == 1)
				{
					cout << "Digite o nome: " << endl;
					cin >> nomee;
					cout << "Digite endereco: " << endl;
					cin >> ende;
					cout << "Digite telefone " << endl;
					cin >> tel;
					cout << "Digite Salario: " << endl;
					cin >> sala;
					cout << "Digite Valor de vendas: " << endl;
					cin >> var;
					addvende(nomee, ende, tel, sala, var);
				}
				if (p == 2)
				{
					cout << "Digite o nome: " << endl;
					cin >> nomee;
					cout << "Digite endereco: " << endl;
					cin >> ende;
					cout << "Digite telefone " << endl;
					cin >> tel;
					cout << "Digite Credito: " << endl;
					cin >> sala;
					cout << "Digite Valor de divida: " << endl;
					cin >> var;
					addvende(nomee, ende, tel, sala, var);
				}
				if (p == 3)
				{
					cout << "Digite o nome: " << endl;
					cin >> nomee;
					cout << "Digite endereco: " << endl;
					cin >> ende;
					cout << "Digite telefone " << endl;
					cin >> tel;
					cout << "Digite Salario: " << endl;
					cin >> sala;
					cout << "Digite Valor de ajuda de custo: " << endl;
					cin >> var;
					addvende(nomee, ende, tel, sala, var);
				}
				if (p == 4)
				{
					cout << "Digite o nome: " << endl;
					cin >> nomee;
					cout << "Digite endereco: " << endl;
					cin >> ende;
					cout << "Digite telefone " << endl;
					cin >> tel;
					cout << "Digite Salario: " << endl;
					cin >> sala;
					cout << "Digite Valor de producao: " << endl;
					cin >> var;
					addvende(nomee, ende, tel, sala, var);
				}
				
				break;

		default:
			cout << "Opcao invalida!!!" << endl;
			break;
		}
	}
}

void Empressa::Balancofi()
{
	for (int i = 0; i < operarios.size(); i++)
	{
	   custos += operarios[i].Getsalario();
	   impostos += operarios[i].Getimposto();
	}
	for (int i = 0; i < adm.size(); i++)
	{
		custos+= adm[i].Getsalario();
		impostos += adm[i].Getimposto();
	}
	for (int i = 0; i < vendedores.size(); i++)
	{
		custos += vendedores[i].Getsalario();
		impostos += vendedores[i].Getimposto();
	}
	for (int i = 0; i < fornecedores.size(); i++)
	{
		if ( 0 > fornecedores[i].Getsaldo())
		credor -= fornecedores[i].Getsaldo();	
	}

	cout << "Custos de funncionarios: " << custos << endl;
	cout << "Custos de impostos: " << impostos << endl;
	cout << "Valor a receber de fornecedores: " << credor << endl;
}
