#include <iostream>
#include <ctime>
using namespace std;

int binarySearch(int arr[], int l, int r, int target) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == target) {
            return m;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 5, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    // timer mulai
    clock_t start = clock();

    int index = binarySearch(arr, 0, size - 1, target);

    // timer akhir
    clock_t end = clock();

    double timeTaken = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1) {
        cout << "Target ditemukan " << index << endl;
    } else {
        cout << "Target tidak ditemukan" << endl;
    }

    cout << "Waktu yang dibutuhkan Binary Search: " << timeTaken << " detik" << endl;

    return 0;
}
