#include<iostream>
using namespace std;

int main(){

    char i;

    cout << "The Alphabets from A to Z are: \n";
    for (i = 'A'; i <= 'Z'; i++) {
        // Print the alphabet
        cout << i << " ";
    }
    
    cout << "\nThe Alphabets from a to z are: \n";
    for (i = 'a'; i <= 'z'; i++) {
        cout << i << " ";
    }

    return 0;
}