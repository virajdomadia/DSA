#include<iostream>
#include<limits.h>
using namespace std;

int reverseInt(int n){
    int ans = 0, rem = 0;
    bool isNeg = false;
    if(n <= INT_MIN){
        return 0;
    }
    if(n < 0){
        isNeg=true;
        n = -n;
    }
    while(n>0){
        if(ans > INT_MAX / 10){
            return 0;
        }
        int digit = n%10;
        ans = ans * 10 + digit;
        n = n/10; 
    }
    return isNeg ? -ans:ans;
}

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<reverseInt(n);
}