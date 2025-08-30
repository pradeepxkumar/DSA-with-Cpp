#include<iostream>
using namespace std;

void segregate (int arr[10]){
    int start= 0 , end = 9;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++;
                end++;
            }
            else
            end--;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[10] = {0,1,0,1,1,0,1,1,0,1};
    segregate(arr);
}