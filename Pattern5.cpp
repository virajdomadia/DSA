#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=n; i >= 1; i--){
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}