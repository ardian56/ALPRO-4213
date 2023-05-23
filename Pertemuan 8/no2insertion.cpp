#include <iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << "[" << arr[i] << "]";
    }
    cout << "\n";
}

void Insertion(int arr[],int size){
    for(int i=1;i<size;i++){
        int key= arr[i];
        int j=i-1;
        while(j >=0 && arr[j]<key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int data[]={2,3,4,1,5,2,1};
    int size=sizeof(data)/sizeof(data[0]);

    cout << "Array Awal" << endl;
    Print(data,size);
    cout << endl;

    Insertion(data,size);
    cout << endl;

    cout << "Tersortir" << endl;
    Print(data,size);
}
