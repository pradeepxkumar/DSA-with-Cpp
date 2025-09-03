#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int j=0;j<4;j++){
        for(int i = j+1;i<4;i++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
    cout<<arr[i][j]<<" ";
    cout<<endl;
    
    
}
