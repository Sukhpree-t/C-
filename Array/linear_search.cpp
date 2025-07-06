#include<iostream>
using namespace std;

int linSearch(int arr[],int size,int key) {
    for (int i = 0; i < size; i++){
        if (arr[i]==key){
            return i;
        }  
    }
    return -1;
    
}
int main() {
    int arr[] = {5,15,22,1,-15,24};
    int size = sizeof(arr)/sizeof(int);
    int key = 28;

    if(linSearch(arr,size,key)) {
        cout<<"Key is found."<<endl;
    }else {
        cout<<"Key is not found."<<endl;
    }

}