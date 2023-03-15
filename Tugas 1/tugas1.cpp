#include <iostream>
using namespace std;

int Tambah(int x, int y) {
return x + y;
}

int Kurang(int x, int y){
return x - y;
}

int Total(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;

}

double Rata(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    double rata_rata = (double) total / size;
    return rata_rata;
}
int main() {
    int a,b;
    int arr[] = {1, 3, 4, 5};
    int i = 0;
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "\nMasukan Nilai a: "; cin >> a;
    cout << "\nMasukan Nilai b: "; cin >> b;
    cout << "\n---------------------------------------------------------";
    cout << "\nHasil Penjumlahan dari a dan b adalah " << Tambah(a, b) << endl;
    cout << "\nHasil Pengurangan dari a dan b adalah " << Kurang(a, b) << endl;
    cout << "\n---------------------------------------------------------";
    cout << "\nIsi array: ";
        while (i < 4){
            cout << arr[i] << " ";
            i++;
            }
    cout << "\n---------------------------------------------------------";
    int tot = Total(arr,size);
    double rata_rata = Rata(arr, size);
    cout << "\nTotal: " << tot << endl;
    cout << "\nRata-rata: " << rata_rata << endl;

return 0;
}
