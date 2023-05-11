#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a number to start the count down"<<endl;
    cin>>number;
    cout<<"Countdown Started..."<<endl;
    
    for (int i = number; i >= 0; i--)
    {
       cout<<i<<endl;
    }
    
    return 0;
}