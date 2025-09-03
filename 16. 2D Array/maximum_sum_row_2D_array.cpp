#include<iostream>
using namespace std;

int main(){
    int row , col ;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter elements of array: ";
    for(int i = 0 ; i<row;i++){
        for(int j = 0; j<col;j++){
            cin>>arr[i][j];
        }
    
    }    //maximum sum of row in 2D array
    int sum=INT8_MIN;
    int index=-1;
    for(int i = 0 ; i<row;i++){
        int total_row_sum=0;
        for(int j = 0; j<col;j++){
            total_row_sum+=arr[i][j];
        }
        if(sum<total_row_sum)
        sum = total_row_sum;
        index = i;
    }
    cout<<"Maximum sum is "<<sum<<" at index "<<index;
}