#include <iostream>
#include <ctime>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {-8, 45, 0, 4, -9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array Asli:\n";
    printArray(arr, size);

    // timer mulai
    clock_t start = clock();

    selectionSort(arr, size);

    // timer akhir
    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    cout << "Array Tersortir:\n";
    printArray(arr, size);

    cout << "Waktu yang dibutuhkan Selection Sort: " << timeTaken << " detik" << endl;

    return 0;
}
