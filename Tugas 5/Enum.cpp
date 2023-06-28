#include <iostream>

using namespace std;

// Enum untuk gear kendaraan
enum class Gear {
    Neutral,
    First,
    Second,
    Third,
    Fourth,
    Fifth,
    Sixth
};



int main() {

    Gear currentGear = Gear::Fifth;

    if (currentGear == Gear::Neutral) {
        cout << "Posisi Netral" << endl;
    } else if (currentGear == Gear::First) {
        cout << "Gigi Satu" << endl;
    } else if (currentGear == Gear::Second) {
        cout << "Gigi Dua" << endl;
    } else if (currentGear == Gear::Third) {
        cout << "Gigi Tiga" << endl;
    } else if (currentGear == Gear::Fourth) {
        cout << "Gigi Empat" << endl;
    } else if (currentGear == Gear::Fifth) {
        cout << "Gigi Lima" << endl;
    } else if (currentGear == Gear::Sixth) {
        cout << "Gigi Enam" << endl;
    }

    return 0;
}
