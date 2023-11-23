#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;

    cout<<"Value of addition is "<<a<<" + "<<b<<" = "<<sum(a,b);
}