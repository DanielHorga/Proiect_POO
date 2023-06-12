#include "Cumparator.h"
#include <iostream>

using namespace std;

void Cumparator::CitesteDate() {
    cout << "Echipele: " << endl;
    echipe = CitesteEchipe();

    cout << "Pretul unui bilet: ";
    cin >> pretBilet;

    cout << "Numarul de bilete disponibile: ";
    cin >> bilete;

    cin.ignore(); // Ignora newline-ul ramas in buffer dupa citirea biletei

    cout << "Numele cumparatorului: ";
    getline(cin, numeCumparator);

    cout << "Metoda de plata: ";
    getline(cin, metodaPlata);
}
void Cumparator::AfisareDetalii() {
    CasaDeBilete::AfisareDetalii();
    cout << "Detalii cumparator:" << endl;
    cout << "Nume cumparator: " << numeCumparator << endl;
    cout << "Metoda de plata: " << metodaPlata << endl;
}
void Cumparator::SalveazaDateInFisier(const string& numeFisier) {
    ofstream fout(numeFisier);

    if (!fout) {
        cout << "Eroare la deschiderea fisierului!" << endl;
        return;
    }

    fout << "Echipe: " << echipe[0] << " vs. " << echipe[1] << endl;
    fout << "Pret bilet: " << pretBilet << endl;
    fout << "Numar bilete disponibile: " << bilete << endl;
    fout << "Nume cumparator: " << numeCumparator << endl;
    fout << "Metoda de plata: " << metodaPlata << endl;

    fout.close();

    cout << "Datele au fost salvate in fisierul " << numeFisier << endl;
}

void Cumparator::AfiseazaToateDateDinFisier(const string& numeFisier) {
    ifstream fin(numeFisier);

    if (!fin) {
        cout << "Eroare la deschiderea fisierului!" << endl;
        return;
    }

    string linie;
    while (getline(fin, linie)) {
        cout << linie << endl;
    }

    fin.close();
}

