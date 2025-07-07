#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6};

    cout<<"Size is : "<< vec.size() <<endl;

    vec.push_back(24);                         //add 24
    cout<<"Size is : "<< vec.size() <<endl;
    cout<<"Capacity is : "<< vec.capacity() <<endl; //capacity will be double of original capacity. Because previous vector has not storage.


    vec.push_back(18);                         //add 18
    cout<<"Size is : "<< vec.size() <<endl;
    cout<<"Capacity is : "<< vec.capacity() <<endl;       //will be store in previus new vector    

    vec.pop_back();                            //delete 18

    for(int i : vec) {
        cout<< i <<endl;
    };

    cout<<"Front : "<<vec.front()<<endl;
    cout<<"Front : "<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;
    
} 