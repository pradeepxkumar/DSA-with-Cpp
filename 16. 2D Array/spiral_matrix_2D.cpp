#include<iostream>
using namespace std;

int main(){
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    cout << "Original 2D array:" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            cout<<arr1[i][j]<<" ";
        cout << endl;
    }
    
    cout << "\nSpiral traversal: ";
    
    int row = 3, col = 4;
    int top = 0, bottom = row-1, left = 0, right = col-1;

    while(top <= bottom && left <= right){
        for(int j = left; j <= right; j++){
            cout << arr1[top][j] << " ";
        }
        top++;

        for(int i = top; i <= bottom; i++){
            cout << arr1[i][right] << " ";
        }
        right--;
        
        if(top <= bottom){
            for(int j = right; j >= left; j--){
                cout << arr1[bottom][j] << " ";
            }
            bottom--;
        }
        
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                cout << arr1[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
    
    return 0;
}
