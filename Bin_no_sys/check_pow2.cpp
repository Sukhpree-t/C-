#include<iostream>
using namespace std;

bool isPowof2(int n) {
    return n>0 && (n&(n-1))==0;  
}

int main() {
    int n;
    cout<<"number is : ";
    cin>>n;

    
    if(isPowof2(n)) {
        cout<<"given N is power of two." <<endl;
    } else{
        cout<<"given N is not a power of two."<<endl;
    }
}