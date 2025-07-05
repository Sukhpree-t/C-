#include<iostream>
using namespace std;

void Dec_bin(int decNum) {
    int ans=0;
    int pow=1;
    while(decNum>0) {
        int rem = decNum%2;
        decNum = decNum/2;
        ans+=(rem*pow);
        pow = pow*10;
    }
    cout<<ans<<endl;
}

int main() {
    int n;
    cout<<"Decimal number is : ";
    cin>>n; 

    Dec_bin(n);
    return 0;
}