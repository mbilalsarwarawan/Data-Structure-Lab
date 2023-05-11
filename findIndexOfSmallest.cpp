#include<iostream>
using namespace std;

int main(){
    int temp, i, j;
    int array[6] = {4, 5, 2, 11, 6, 1};

    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 6; j++)
        {
            if (array[i]>array[j]){
                    temp = array[i];
                    array[i] = array[0];
                    array[0] = temp;
            }
        }
    }
    cout<<array[i]<<" is the smallest element in array!"<<endl;
    return 0;
}