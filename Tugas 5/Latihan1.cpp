#include <iostream>
#include <math.h>

using namespace std;

struct hitung{
    float phi = 3.14;

    //Luas Persegi Panjang
    int luasPer(int p, int l){
        return p * l;
    }

    //Luas Lingkaran
    float luasLing(int r){
        return phi * r * r;
    }

    //Volume Kerucut
    float volKer(int r, int t){
        return 0.3 * phi * pow(r,2) * t;
    }

    //Volume Bola
    double VolBol(int r){
        return 1.3 * phi * pow(r,3);
    }
};

struct hitung htng;

int main(){
    cout << "Luas Persegi Panjang : " << htng.luasPer(3,10) << endl;
    cout << "Luas Lingkaran : " << htng.luasLing(4) << endl;
    cout << "Volume Kerucut : " << htng.volKer(4,8) << endl;
    cout << "Volume Bola : " << htng.volBol(5) << endl;

    return 0;
}
