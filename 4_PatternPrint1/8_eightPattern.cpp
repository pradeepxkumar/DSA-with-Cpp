#include<iostream>
using namespace std;
  
int main(){

    for(int row=1;row<=5;row++){
        for(int col=0; col<=5-(row-1);col++){
            char name = 'A'+col;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}