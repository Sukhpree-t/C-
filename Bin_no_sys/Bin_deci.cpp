#include<iostream>
using namespace std;

int check_bin(int num) {
    int digit;
    while(num>0) {
        digit = num%10;
        if(digit != 0 && digit != 1) {
            cout<<"Given number is not Binary number !"<<endl;
            return 0;
        }
        num = num/10;
    }
    return 1;
}

int bin_Dec(int num) {
    int ans=0,pow=1;
    int rem;

    while(num>0) {
        rem = num%10;
        ans+=(rem*pow);
        num=num/10;
        pow*=2;
    }
    return ans;
}

int main() {
    int n;
    cout<<"Binary number is : ";
    cin>>n;

    if(check_bin(n)) {
        cout << bin_Dec(n) <<endl;
    }
    return 0;
}