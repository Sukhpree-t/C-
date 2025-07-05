#include<iostream>
using namespace std;

int factorial(int n) {
    if (n <= 0) {
        cout << "Invalid input: Factorial is not defined for negative numbers." << endl;
        return -1;
    }
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact*=i;
    }   
}

int Bino_coeff(int n, int r) {
    if (r > n) {
        cout << "Invalid input: r cannot be greater than n." << endl;
        return 0;
    }
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);

    return fact_n / (fact_r * fact_n_r);
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int result = Bino_coeff(n,r);

    if(result == 0 && r > n) {
        return 1;
    }
    cout << "The binomial coefficient C(" << n << ", " << r << ") is: " << result << endl;
    return 0;

}