#include<iostream>
using namespace std;

float areaCircle(float r){
    float area;
    area = 3.14*r*r;
    return area;
}

int main(){
    float r;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<areaCircle(r);
}