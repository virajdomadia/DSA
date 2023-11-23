#include<iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>b || a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter Value 1: ";
    cin>>a;
    cout<<"Enter Value 2: ";
    cin>>b;
    cout<<"Enter Value 3: ";
    cin>>c;

    cout<<"the greatest value is "<<max(a,b,c);
}