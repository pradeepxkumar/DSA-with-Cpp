#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value :";
    cin>>key;
    int start = 0,mid;
    int end = n-1;

    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            cout<<"Got it.";
            break;
        }
        else if (arr[mid]<key){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
}