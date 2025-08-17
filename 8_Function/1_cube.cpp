#include<iostream>
using namespace std;
#include <cmath>

void cube(int n){
    int c = pow(n,3);
    cout<<"cube :"<<c;
}
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cube(n);
}
