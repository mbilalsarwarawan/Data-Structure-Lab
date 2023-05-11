#include<iostream>
using namespace std;

int main()
{
    int intType;
    char charType;
    float floatType;
    double doubleType;
    
    cout<<"Size of int: " << sizeof(intType) <<" bytes" << endl;
    cout << "Size of char: " << sizeof(charType) <<" byte" << endl;
    
    cout<<"Size of float: " << sizeof(floatType) <<" bytes" << endl;
    cout<<"Size of double: " << sizeof(doubleType) <<" bytes" << endl;

    return 0;
}
