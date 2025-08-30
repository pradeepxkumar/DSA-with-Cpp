#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,1,6,8};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+= arr[i];
    }
    cout<<"Sum of array: "<<sum;
}