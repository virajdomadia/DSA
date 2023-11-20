#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int j;
        for(int k=0; k<n-i-1; k++){
            cout<<" ";            
        }
        for(j=0; j<i+1; j++){
            cout<<j+1;
        }
        j--;
        for(; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}