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
        for(int j = 0; j<2*i+1; j++){
            if(j==0 || j == 2*i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
        for(int k = 0; k<i; k++){
            cout<<" ";
        }
        for(int j = 0; j<2*n-2*i-1; j++){
            if(j==0 || j == 2*n-2*i-2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}