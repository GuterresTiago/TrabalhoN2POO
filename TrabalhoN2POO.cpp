
#include "Empressa.h"
#include <iostream>

int main()
{
    int b = 10;
    Empressa a;

    a.addvende("Alberto", "Quintao", "9090", 5000, 500);
    a.addvende("Beto", "Praia do rosa", "1234", 8000, 400);
    a.addvende("Cristina", "Poa", "9874", 9000, 800);
    a.addvende("Dolores", "Viamao", "1710", 2000, 100);
    a.addvende("Edimar", "Pelotas", "2123", 3000, 400);
    a.addvende("Fausto", "Salvador", "1451", 4000, 550);

    a.addadm("Gustavo", "Ponta grossa", "5546", 6000, 200);
    a.addadm("Henrque", "Sao Paulo", "4864", 10000, 800);
    a.addadm("Ines", "Rio de Janeiro", "5546", 3200, 400);

    a.addfornece("Jose", "Pernambuco", "5567", 1000, 8000);
    a.addfornece("Kleber", "Erebango", "9574", 40000, 30000);
    a.addfornece("Lair", "Canoas", "8754", 0, 7000);
    a.addfornece("Monica", "Alvorada", "8461", 50, 140);
    a.addfornece("Naiara", "Campo Grande", "8897", 6400, 7250);

    a.addoperario("Otto", "Lagoa Vermelha", "9825", 3000, 800);
    a.addoperario("Pietra", "Ararica", "9425", 2000, 700);//obs Ararica é a menor cidade do RS :)
    a.addoperario("Ricardo", "Rio Grande", "6548", 1200, 300);
    a.addoperario("Sabrina", "Torres", "4567", 2100, 650);

    while (b != 0)
    {
        cout << "   Menu Inicial   " << endl;
        cout << " ---------------- " << endl;
        cout << " 1-Acessar Informacoes da impressa:  " << endl;
        cout << " 0-sair:  " << endl;
        cin >> b;
        switch (b)
        {
        case 1:
            a.Info();
            break;
        default:
            cout << "numero invalido!!!" << endl;
            break;
        }
    }
}


