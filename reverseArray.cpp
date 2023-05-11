#include<iostream>
using namespace std;

int main(){
    int reverseMe[5] = {34, 54, 64, 74, 84};
    int temp;

    for (int i = 4; i >= 0; i--)
    {
      cout<<reverseMe[i]<<" , ";
    }
    
    return 0;
}