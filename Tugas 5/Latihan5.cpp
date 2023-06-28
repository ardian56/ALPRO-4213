#include <iostream>
#include <string>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};

int main() {
    sepeda spd;
    sepeda* Sepeda = &spd;

    Sepeda->merk = "Polygon";
    Sepeda->type = "Sepeda Gunung";
    Sepeda->tahun = 2013;
    Sepeda->harga = "2.000.000";

    cout << "Merk: " << Sepeda->merk << endl;
    cout << "Type: " << Sepeda->type << endl;
    cout << "Tahun: " << Sepeda->tahun << endl;
    cout << "Harga: " << Sepeda->harga << endl;

    return 0;
}
