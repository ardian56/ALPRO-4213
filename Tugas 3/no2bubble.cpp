#include <iostream>
using namespace std;

void SwapN(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << "[" << arr[i] << "]";
    }
    cout << "\n";
}

void Bubble(int arr[],int size){
    for(int step=0;step<size;step++){
        for(int i=0;i<size-1;i++){
            if(arr[i]<arr[i+1]){
                SwapN(arr[i],arr[i+1]);
            }
        }
    }
}

int main(){
    int data[]={2,3,4,1,5,2,1};
    int size=sizeof(data)/sizeof(data[0]);

    cout << "Array Awal" << endl;
    Print(data,size);
    cout << endl;

    Bubble(data,size);
    cout << endl;

    cout << "Tersortir" << endl;
    Print(data,size);
}
