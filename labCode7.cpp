#include<iostream>
using namespace std;
int main(){
    // nested if else to know the sign of number
    int x,y,z,n;
    cout<<"enter first  number : ";
    cin>>x;
    cout<<"enter second  number : ";
    cin>>y;
    cout<<"enter third  number : ";
    cin>>z;
    cout<<"enter fourth  number : ";
    cin>>n;

    if(x>y){
        if(x>z){
            if(x>n){
                cout<<x<<" is the greatest number .";
            }
        }
    }
    else if(y>x){
        if(y>z){
            if(y>n){
                cout<<y<<" is the greatest number .";
            }
        }
    }
    else if(z>x){
        if(z>y){
            if(z>n){
                cout<<z<<" is the greatest number .";
            }
        }
    }

     else
     cout<<n<< "is the greatest number";

     cout<<"end";
  
    return 0;
}