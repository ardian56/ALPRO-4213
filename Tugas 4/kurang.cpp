#include <iostream>
using namespace std;

int kurang(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return kurang(a - 1, b - 1);
   }
}

int main() {
  int x,y;
  cout<<"masukan nilai pertama: ";
  cin>>x;
  cout<<"masukan nilai kedua: ";
  cin>>y;

  int hasil = kurang(x,y);
  cout << "Hasil pengurangan: " << hasil << endl;

  return 0;
}

