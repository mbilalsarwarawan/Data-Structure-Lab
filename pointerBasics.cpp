#include<iostream>
using namespace std;
int main(){

    int var = 3; 
    int * ptr;
    ptr = &var;

    cout<<"Value of the variable is: "<<var<<endl; //value of variable 
    cout<<"Address of the variable is: "<<ptr<<endl; //address of the variable
    cout<<"Address of the variable is: "<<&var<<endl; //address of the variable
    cout<<"Value of the variable "<<var<< " at "<<ptr<<" Address is "<<*ptr<<endl; //value at

    ptr++;

    cout<<"Address of the variable after increment: "<<ptr<<endl;
return 0;
}