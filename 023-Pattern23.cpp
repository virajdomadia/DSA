#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    int c=1;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<c;
            c++;
            if(j<i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start = c-n;
    for(int i=0; i<n; i++){
        int k = start;
        for(int j=0; j<=n-i-1; j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }            
        }
        start = start-(n-i-1);
        cout<<endl;
    }
}