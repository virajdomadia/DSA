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
        for(int j=0; j<i+1; j++){
            if(j==0||i==n-1||j==i){
                cout<<j+1<< " ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}