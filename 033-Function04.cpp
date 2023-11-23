#include<iostream>
using namespace std;

void grade(int mark){
    if(mark >= 90){
        cout<<"A";
    }
    else if(mark >= 80){
        cout<<"B";
    }
    else if(mark >= 70){
        cout<<"C";
    }
    else if(mark >= 60){
        cout<<"D";
    }
    else if(mark >= 50){
        cout<<"E";
    }
    else{
        cout<<"F";
    }
}
int main(){
    int mark;
    cout<<"Enter your Marks: ";
    cin>>mark;

    grade(mark);
}