#include <iostream>
using namespace std;

int kali(int a, int b) {
  if (b == 0) {
    return 0;
  } else {
    return a + kali(a, b - 1);
    }
}

int main() {
  int x,y;
  cout<<"masukan nilai pertama: ";
  cin >>x;
  cout <<"masukan nilai kedua: ";
  cin >>y;
  int hasil = kali(x,y);
  cout << "Hasil perkalian: " << hasil <<endl;
  return 0;
}

