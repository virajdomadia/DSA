#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<< "Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    for (int i = 0; i < n; i++){
        if(i == 0 || i == n-1){
            for(int j = 0; j < m; j++){
                cout<< "* ";
            }
        }
        else{
            cout<<"* ";
            for(int k = 0; k < m-2; k++){
                cout << "  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}