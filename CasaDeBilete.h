#ifdef CASADEBILETE_H
#endif // CASADEBILE_H


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CasaDeBilete {
protected:
    vector<string> echipe;
    int pretBilet;
    int bilete;

public:
    CasaDeBilete(const vector<string>& echipe, int pretBilet, int bilete)
        : echipe(echipe), pretBilet(pretBilet), bilete(bilete) {}

    void VanzareBilet() {
        if (bilete > 0) {
            cout << "Bilet vandut pentru meciul dintre " << echipe[0] << " si " << echipe[1] << endl;
            bilete--;
        }
        else {
            cout << "Nu mai sunt bilete disponibile pentru acest meci." << endl;
        }
    }

    void AfisareDetalii() {
        cout << "Detalii meci:" << endl;
        cout << "Echipe: " << echipe[0] << " vs. " << echipe[1] << endl;
        cout << "Pret bilet: " << pretBilet << " RON" << endl;
        cout << "Numar bilete disponibile: " << bilete << endl;
    }
};

