#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    
    for(int i = 1; i<=n; i++){
        int count = 1;
        for(int j = 1; j<=i; j++){
            cout<<count<< " ";
            count = count * (i-j)/j;
        }
        cout<<endl;
    }
}