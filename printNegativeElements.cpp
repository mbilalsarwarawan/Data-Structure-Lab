#include<iostream>
using namespace std;

    int main(){
    int numbers[5];
    int size,i,count=0;

    cout<<"Enter the size of array "<<endl;
    cin>>size;

    for ( i = 0; i < size; i++)
    {
    cout<<"Enter the element No. "<<i+1<< ": ";
    cin>>numbers[i];
        /* code */
    }

    cout<<"Negative elements in the array are: ";
    for ( i = 0; i < size; i++)
    {
        if(numbers[i]<0){
        count++;
        cout<<numbers[i]<<endl;
        }
    }
    cout<<"Total number of negative elements: "<<count;
return 0;
}