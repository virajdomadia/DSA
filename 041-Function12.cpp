#include<iostream>
using namespace std;

int setKthBit(int n, int k){
    return n | (1<<k);
}
int main(){
    int n, k;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Enter kth bit: ";
    cin>>k;

    cout<<setKthBit(n, k);
}