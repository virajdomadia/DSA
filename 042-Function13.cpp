#include<iostream>
#include <vector>
using namespace std;

vector<double> convertTemp(double celsius){
    vector<double> ans;
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32;
    ans.push_back(k);
    ans.push_back(f);
    return ans;
}

int main(){
    double celsius;
    cout<<"Enter the celsius: ";
    cin>>celsius;

    cout<<convertTemp(celsius);
}