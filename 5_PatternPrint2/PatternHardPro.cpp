#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }



    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }



    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<col;
        }
        cout<<endl;
    }



    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            char name = 'A'+(col-1);
            cout<<name;
        }
        cout<<endl;
    }


    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=row; col>=1;col--){
            cout<<col;
        }
        cout<<endl;
    }



    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }




    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<"  ";
        }
        for(int col=1; col<=row;col++){
            cout<<col<<" ";
        }
        for(int col=row-1; col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }



    for(int row=n;row>=1;row--){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }



    for(int row=n;row>=1;row--){
        for(int col=1; col<=2*row-1;col++){
            cout<<"*";
        }
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }



    for(int row=n;row>=1;row--){
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        for(int col=1; col<=2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=1;row<=n;row++){
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        for(int col=1; col<=2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }


    for(int row=1;row<=n;row++){
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        for(int col=1; col<=2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        for(int col=1; col<=2*n-2*row;col++){
            cout<<" ";
        }
        for(int col=1; col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    

    for(int row=1;row<=n;row++){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n;row>=1;row--){
        for(int col=1; col<=n-row;col++){
            cout<<" ";
        }
        for(int col=1; col<=2*row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }






}
