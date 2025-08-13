#include<iostream>
using namespace std;

int main(){
    /// While Loop
    
    // int n;
    // cout<<"Enter the number";
    // cin>>n;
    // int i = 1;
    // while (i<=n)
    // {
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // } 
    
    
    /// Do While Loop
    int n;
    cout<<"Enter the number";
    cin>>n;
    int i = 1;
    do
    {
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }while(i<=n);
}