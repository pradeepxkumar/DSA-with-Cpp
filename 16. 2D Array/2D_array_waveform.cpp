#include<iostream>
using namespace std;
#include<vector>

int main(){
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //print 2D array
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    cout<<arr1[i][j]<<" ";
    cout<<endl;
    
    //wave form 2D array print
    for(int j=0;j<4;j++){
        if(j%2==0){
            for(int i=0;i<3;i++)
            cout<<arr1[i][j]<<" ";
        }
        else{
            for(int i=2;i>=0;i--)
            cout<<arr1[i][j]<<" ";
        }
    }
}