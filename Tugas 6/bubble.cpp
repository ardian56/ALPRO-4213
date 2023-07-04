#include <iostream>
#include <ctime>
using namespace std;


void bubbleSort(int array[], int size) {
  for (int step = 0; step < size; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  clock_t start = clock();

  bubbleSort(data, size);

  clock_t end = clock();

  double timeTaken = double(end - start) / CLOCKS_PER_SEC;

  cout << " Array Tersortir:\n";
  printArray(data, size);

  cout << "Waktu yang dibutuhkan Bubble Sort: " << timeTaken << " detik" << endl;

  return 0;
}