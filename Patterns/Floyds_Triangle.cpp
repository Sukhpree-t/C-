#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of Floyd's triangle: ";
    cin >> n;

    int i,j;
    int num = 1;

    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            cout<< num<< " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}