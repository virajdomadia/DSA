#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter number of rows : ";
    cin>>n;
    for (int i = 0; i < n; i++){
        if(i == 0 || i == n-1){
            for(int j = 0; j < n; j++){
                cout<< "* ";
            }
        }
        else{
            cout<<"* ";
            for(int k = 0; k < n-2; k++){
                cout << "  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}