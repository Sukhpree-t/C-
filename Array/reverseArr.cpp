#include<iostream>
using namespace std;

void revArr(int arr[],int size) {
    int st=0,end=(size-1);

    while(st<end) {
        swap(arr[st],arr[end]);
        st++;
        end--;
    } 
}

int main() {
    int arr[] = {5,15,22,1,-15,24};
    int size = sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    revArr(arr,size);

    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}