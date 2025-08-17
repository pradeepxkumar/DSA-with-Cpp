#include<iostream>
using namespace std;
void swap(int &a,int &b , int &c){
    int temp = a;
    a = c;
    c = b;
    b = temp;
}
int main (){
    int a,b,c;
    cout<<"Enter the number a= ";
    cin>>a;
    cout<<"Enter the number b= ";
    cin>>b;
    cout<<"Enter the number c= ";
    cin>>c;
    cout << "Before rotation: a=" << a << " b=" << b << " c=" << c << endl;

    swap(a,b,c);
    cout << "After rotation:  a=" << a << " b=" << b << " c=" << c << endl;
}