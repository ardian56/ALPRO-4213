
#include<iostream>
using namespace std;

bool isEven(int x){
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x,int f){
    return x % f == 0;
}

int maxArray(int arr[],int n){
    int result;
    for(int i = 0; i < n; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[],int n){
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int MAX(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}

int MIN(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int sumEven(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void SWAP(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai A: " << a << endl << "Nilai B: " << b;
}

bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}
int main(){

    int n;
    //isEven
    cout << "==========================================";
    cout << " IsEven" << endl;
    cout << "Masukan Angka Genap: ";
    cin >> n;
    string even = (isEven(n)==1) ? " angka Genap" : " bukan angka Genap";
    cout << n << even << endl;
    cout << "==========================================";

    //isOdd
    cout << " IsOdd" << endl;
    cout << "Masukan Angka Ganjil: ";
    cin >> n;
    string odd = (isOdd(n)==1) ? " angka Ganjil" : " bukan angka Ganjil";
    cout << n << odd << endl;
    cout << "==========================================";
    int x,f;

    //isFactor
    cout << " IsFactor" << endl;
    cout << "Masukan Nilai x: ";
    cin >> x;
    cout << "Masukan Nilai f: ";
    cin >> f;
    string faktor = (isFactor(x,f)==1) ? "Faktor" : "Bukan Faktor";
    cout << x << " dan " << f << " Adalah " << faktor << endl;
    cout << "==========================================";
    int a,b;

    //max min
    cout << " Max Min" << endl;
    cout << "Masukan Nilai A: ";
    cin >> a;
    cout << "Masukan Nilai B: ";
    cin >> b;
    cout << "nilai yang terbesar : " << MAX(a,b) << endl;
    cout << "nilai yang terkecil : " << MIN(a,b) << endl;
    cout << "==========================================";

    //sumEven Odd
    cout << " Sum Even Odd" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen array: ";
        cin >> arr[i];
    }
    int MaxA = maxArray(arr,n);
    int MinA = minArray(arr,n);
    int SumE = sumEven(arr,n);
    int SumO = sumOdd(arr,n);
    cout << "Nilai Terbesar dari array: " << MaxA << endl;
    cout << "Nilai Terkecil dari array: " << MinA << endl;
    cout << "Jumlah Nilai Genap: " << SumE << endl;
    cout << "Jumlah Nilai Ganjil: " << SumO << endl;
    cout << "==========================================";

    //isFound
    cout << " IsFound" << endl;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    cout << endl;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan angka: ";
        cin >> ar[i];
    }
    cout << "Angka yang ingin dicari: ";
    cin >> x;
    string cari = (isFound(ar,x,n)==1) ? "Angka ditemukan" : "Angka tidak ditemukan";
    cout << cari << endl;
    cout << "==========================================";

    //swap
    cout << " Swap" << endl;
    cout << "Masukan Nilai A: ";
    cin >> a;
    cout << "Masukan Nilai B: ";
    cin >> b;
    SWAP(a,b);
return 0;
}
