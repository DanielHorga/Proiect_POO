#include <iostream>
#include "CasaDeBilete.h"
#include <fstream>

using namespace std;

class Cumparator : public CasaDeBilete {
private:
    string numeCumparator;
    string metodaPlata;

public:
    Cumparator(const vector<string>& echipe, int pretBilet, int bilete,
        const string& numeAngajat, const string& programLucru)
        : CasaDeBilete(echipe, pretBilet, bilete), numeCumparator(numeAngajat), metodaPlata(programLucru) {}

    void CitesteDate();

    void AfisareDetalii();
    void SalveazaDateInFisier(const string& numeFisier);
    void CitesteDateDinFisier(const string& numeFisier);

    void AfiseazaToateDateDinFisier(const string& numeFisier);

private:
    vector<string> CitesteEchipe() {
        vector<string> echipe;
        int numarEchipe;

        cout << "Introdu numarul de echipe: ";
        cin >> numarEchipe;

        cin.ignore(); // Ignora newline-ul ramas in buffer dupa citirea numarului de echipe

        for (int i = 0; i < numarEchipe; i++) {
            string echipa;
            cout << "Introdu numele echipei " << i + 1 << ": ";
            getline(cin, echipa);
            echipe.push_back(echipa);
        }

        return echipe;
    }

};