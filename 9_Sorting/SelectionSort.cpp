#include<iostream>
using namespace std;

int main(){
    int arr[5] = {2,5,1,7,4};

    //Asending 

    // for(int i=0;i<5;i++){
    //     int index=i;
    //     for(int j=i+1;j<=5;j++){
    //         if(arr[j]<arr[index]){
    //             index = j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }


    //Descending

    for(int i=4;i>0;i--){
        int index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}