#include<iostream>
using namespace std;

void counting_1_to_N(int n){
    for(int i = 1; i<=n; i++){
        cout << i;
    }

}
int main(){
    int n;

    cout<<"enter number: ";
    cin>>n;

    counting_1_to_N(n);
}