#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the triangle pattern: ";
    cin >> n;

    int i,j;
    for ( i = 0; i < n; i++){
        for(j=0; j <n-i-1; j++){
            cout<<"  ";
    }
    for(j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
    for(j=i; j>0; j--){
            cout<<j<<" ";
        }
    cout << endl;
    }   
        return 0;
}