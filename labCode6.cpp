#include<iostream>
using namespace std;
int main(){
    // nested if else to know the sign of number
    int n;
    cout<<"enter a number : ";
    cin>>n;
    if(n%2==0){
        if(n>0){
            cout<<"the number  is positive and even";
        }
        else
        cout<<"the number is negative and even";
    }
    else{
        if(n>0){
            cout<<"the number is positive and odd";
        }
      else if(n==0){
            cout<<"the number zero";
        }
        else{
            cout<<"the number is negative and odd";
        }
    }
    

    return 0;
}