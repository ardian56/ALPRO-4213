#include <iostream>
using namespace std;
int bagi(int a, int b) {
  if (a < b) {
    return 0;
  } else {
    return 1 + bagi(a - b,b);

  }
}

int main() {
  int x,y;
  cout<<"masukan nilai pertama: ";
  cin>>x;
  cout<<"masukan nilai kedua: ";
  cin>>y;

  int hasil = bagi(x,y);

  std::cout << "Hasil pembagian: " << hasil << std::endl;

  return 0;
}
