#include<iostream>
using namespace std;

int checkNum(int n){
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    checkNum(n);
}