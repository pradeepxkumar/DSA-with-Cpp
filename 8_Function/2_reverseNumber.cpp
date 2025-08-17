#include<iostream>
using namespace std;
int reverseNumber(int n){
    int rev =0, rem;
    while(n!=0){
        rem = n%10;
        n/=10;
        rev = rev*10+rem;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<-5000 || n>5000){
        cout<<"Invalid number.";
    }
    else{
        cout<<reverseNumber(n);
    }
}