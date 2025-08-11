#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    int last =0;
    int prev = 1;
    for(int i =1 ; i<n;i++){
        last = prev;
        prev = sum;
        sum = prev+last;
    }
    cout<<n<<"th of fibonacci number is : "<<sum;
}