#include<iostream>
using namespace std;

int Bino_coeff(int n, int r) {
    if (r > n) {
        cout << "Invalid input: r cannot be greater than n." << endl;
        return 0;
    }

    int fact_n=1, fact_r=1, fact_n_r=1;

    for(int i=1; i<=n; i++) {
        fact_n*=i;
    }
    for(int i=1; i<=r; i++) {
        fact_r*=i;
    }
    for(int i=1; i<=n-r; i++) {
        fact_n_r=fact_n_r*i;
    }

    int binomial_coefficient = fact_n / (fact_r * fact_n_r);
    
    return binomial_coefficient;
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    int result = Bino_coeff(n,r);

    if(result == 0 && r > n) {
        return 1; // Exit with error code if input is invalid
    }
    cout << "The binomial coefficient C(" << n << ", " << r << ") is: " << result << endl;
    return 0;

}