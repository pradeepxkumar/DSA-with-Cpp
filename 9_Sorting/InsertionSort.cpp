#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    /// Incresing Order

    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
            }
            else
            break;  
        }
    }


    ///Decresing Order

    // for(int i=1;i<n;i++){
    //     for(int j=i;j>0;j--){
    //         if(arr[j-1]<arr[j]){
    //             swap(arr[j],arr[j-1]);
    //         }
    //         else
    //         break;  
    //     }
    // }
    //Print array
    cout<<endl<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}