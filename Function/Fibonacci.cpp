#include<iostream>
using namespace std;
 
void fibonacci(int n) {
    int64_t a=0,b=1,next;
    for(int i = 0; i<n; i++) {
        cout << a<< " ";
        next = a+b;
        a=b;
        b=next;
    }
}

int main() {
    int n;
    cout<<"n is : ";
    cin>>n;
    fibonacci(n);
}
