#include<iostream>
using namespace std;
int main()
{
    int a;
    // Age should be grather then 0.
    cout<<"Enter the age: ";
    cin>>a;
    if(a<12 || a>=65){
        cout<<"This person is eligible for ticket discount";
    }
    else{
        cout<<"This person is not eligible for ticket discount";  
    }
    return 0;
}   