#include <iostream>

using namespace std;

bool CekGanjil(int a){
    return (a % 2 != 0) ? true : false;
}

void GenapKecil(int arr[] , int n) {
    int idx = -1;
    int temp = arr[0];
    for (int i = 0; i < n; i++) {
        if (temp>=arr[i] && !CekGanjil(arr[i])){
            idx = i;
            temp = arr[idx];
        }
    }
    if(idx != -1){
        cout << "Genap Terkecil: " << arr[idx]<< endl;
        cout << "Index : " << idx << endl;
    }
    else{
        cout << "Tidak ada angka genap" << endl;
    }
}

int main() {
    int arr[] = {6,7,4,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    GenapKecil(arr, size);
    return 0;
}


