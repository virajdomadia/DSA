#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int k = 0; k<n-i-1; k++){
            cout<<"  ";
        }
        int start = i+1;
        for(int j = 0; j<i+1; j++){
            cout<<start<<" ";
            start++;
        }
        for(int j = 0; j<i; j++){
            cout<<start - 2<<" ";
            start--;
        }
        cout<<endl;
    }
}