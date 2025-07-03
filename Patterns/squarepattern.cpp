#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    int i, j;
    
    for(i=0; i<n; i++) {
        char ch = 'A';
        for(j=0; j<n; j++) {
            cout << ch << " ";
            ch = ch+1;
        }
        cout << endl;
    }
    
}
//// This program prints a square pattern of letters based on user input for the size of the square.