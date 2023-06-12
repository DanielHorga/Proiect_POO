#include <iostream>
#include <conio.h>
#include "Cumparator.h"
using namespace std;


void meniu()
{
    cout << "Alegeti o optiune din meniul de mai jos:";
    cout << "\n1.Citirea datelor de la tastatura";
    cout << "\n2.Afisarea datelor ";
    cout << "\n3.Salvarea datelor in fisier";
    cout << "\n4.Afisarea toate datele din fisier";
    cout << "\n5.Cumpararea unui bilet";
    cout << "\n6.Iesire\n";
    
    

}

int main()
{
    Cumparator casaDeBileteAngajat({}, 0, 0, "", "");
    Cumparator casaDeBileteAngajat1({}, 0, 0, "", "");
    
    int opt, da = 1;
    do
    {
        system("cls");
        meniu();
        cin >> opt;
        switch (opt)
        {
        case 1:
            casaDeBileteAngajat1.CitesteDate();
            _getch();
            break;
        case 2:
            casaDeBileteAngajat1.AfisareDetalii();
            _getch();
            break;
        case 3:
            casaDeBileteAngajat1.SalveazaDateInFisier("date.txt");
            _getch();
            break;
        case 4:
            casaDeBileteAngajat1.AfiseazaToateDateDinFisier("date.txt");
            _getch();
            break;
        case 5:
            casaDeBileteAngajat.VanzareBilet();
            _getch();
            break;
        case 6:
            da = 0;
            break;
        default:
            cout << "Introduceti o alegere valida!";
            break;
        }
    } while (da != 0);
    return 0;


}


