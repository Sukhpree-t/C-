#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the triangle pattern: ";
    cin >> n;

    int i,j;

    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
// This program prints a right-angled triangle pattern of asterisks based on user input for the size of the triangle.