#include<iostream>
using namespace std;
int triplet(int arr[], int n, int target){
    int ans=0,start=0,end=n-1;
    for(int i=0;i<n-2;i++){
        ans = target-arr[i];
        start=i+1;
        end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans){
                cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
                start++;
                end--;
            }
            else if(arr[start]+arr[end]<ans){
                start++;
            }       
            else{
                end--;  
            }
        }
    }    
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array in sorted form: ";  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int target;
    cout<<"Enter target tripletsum: ";
    cin>>target;
    triplet(arr,n,target);
}
