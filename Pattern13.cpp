#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int k = 0; k<n-i-1; k++){
            cout<<" ";
        }
        for(int j = 0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}