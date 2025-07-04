#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the size of the reverse triangle pattern: ";
    cin >> n;
    int i;
    int j;

    for(i=0; i<n; i++) {
        for(j=i+1; j>=1; j--) {
            cout<< j;
        }
        cout << endl;
    }
    
}