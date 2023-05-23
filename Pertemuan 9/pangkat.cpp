#include <iostream>
using namespace std;

int pangkat(int a, int b) {
  if (b == 0) {
    return 1;
  } else {
    return a * pangkat(a,b - 1);
  }
}

int main() {
  int x,y;
  cout<<"masukan bilangan : ";
  cin>>x;
  cout<<"masukan bilangan pangkat: ";
  cin>>y;

  int hasil = pangkat(x,y);
  cout << "Hasil pangkat: " << hasil << endl;

  return 0;
}

