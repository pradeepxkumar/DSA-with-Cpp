#include<iostream>
using namespace std;
void swap(int &a,int &b){
    a= a+b;
    b = a-b;
    a = a-b;
}
int main (){
    int a,b,c;
    cout<<"Enter the number a= ";
    cin>>a;
    cout<<"Enter the number b= ";
    cin>>b;
    cout << "Before rotation: a=" << a << " b=" << b<< endl;

    swap(a,b);
    cout << "After rotation:  a=" << a << " b=" << b<< endl;
}