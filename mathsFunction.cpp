#include<iostream>
using namespace std;

int addition (int, int);
int subtraction (int, int);
int multiplication (int, int);
int division (int, int);

int main(){
    int a, b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;

    cout<<"The sum of two numbers is: "<<addition(a,b)<<endl;
    cout<<"The subtraction of two numbers is: "<<subtraction(a,b)<<endl;
    cout<<"The multiplicaiton of two numbers is: "<<multiplication(a,b)<<endl;
    cout<<"The division of two numbers is: "<<division(a,b)<<endl;

return 0;
int addition(int a, int b){
    return a+b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int division(int a, int b){
    return a/b;
}
}