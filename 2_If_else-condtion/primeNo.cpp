#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<2){
        cout<<"Not Prime.";
    }
    else if (n==2){
       cout<<"It is a prime number.";
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                cout<<"Not Prime.";
                return 0 ;
            }
            else{
                cout<<"It is a prime number.";
                return 0;
            }
        }
    }
}