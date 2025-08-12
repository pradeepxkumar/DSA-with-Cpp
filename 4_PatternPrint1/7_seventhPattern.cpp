#include<iostream>
using namespace std;
  
int main(){

    for(int row=1;row<=6;row++){
        for(int col=0; col<row;col++){
            int n = 10+col;
            cout<<n<<" ";
        }
        cout<<endl;
    }
}