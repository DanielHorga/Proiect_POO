#ifndef BILETE_H
#define BILETE_H
#endif // !BILETE_H



#include <iostream>
#include "CasaDeBilete.h"

using namespace std;


class Bilete : public CasaDeBilete {
private:
    string tribuna;
    int numarLoc;
    int randul;

public:
    Bilete(const vector<string>& echipe, int pretBilet, int bilete, const string& tribuna, int numarLoc, int randul)
        : CasaDeBilete(echipe, pretBilet, bilete), tribuna(tribuna), numarLoc(numarLoc), randul(randul) {}

    void VanzareBilet() {
        if (bilete > 0) {
            cout << "Bilet vandut pentru meciul dintre " << echipe[0] << " si " << echipe[1] << endl;
            cout << "Tribuna: " << tribuna << endl;
            cout << "Loc: " << numarLoc << " in randul " << randul << endl;
            bilete--;
        }
        else {
            cout << "Nu mai sunt bilete disponibile pentru acest meci." << endl;
        }
    }

    void AfisareDetalii() {
        CasaDeBilete::AfisareDetalii();
        cout << "Detalii bilet:" << endl;
        cout << "Tribuna: " << tribuna << endl;
        cout << "Numar loc: " << numarLoc << endl;
        cout << "Randul: " << randul << endl;
    }
};
