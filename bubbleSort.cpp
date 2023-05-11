#include<iostream>
using namespace std;

int main(){
    int array[5] = {5,3,2,11,0}; //passes = n-1, comparision n-1-1
    int n = 5, to_do = n-1, temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < to_do-i; j++)        
        {
            if(array[j]<array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        } 
    }
    cout<<"Array Sorted Successfully!"<<endl;
    cout<<"The New Array is: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}




