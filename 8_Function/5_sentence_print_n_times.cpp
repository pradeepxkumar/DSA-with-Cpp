#include<iostream>
using namespace std;
void print(string name,int n){
    for(int i=0;i<n;i++ ){
        cout<<name<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    string name;
    cout<<"Enter a String: ";
    cin>>name;
    print(name, n);
}