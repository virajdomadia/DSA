#include<iostream>
using namespace std;

int sumEven(int n){
    int sum = 0;
    for(int i = 2; i<=n; i+=2){
        sum = sum + i;        
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Sum Of Even Number till "<<n<<" is "<<sumEven(n);
}