#include<iostream>
using namespace std;
int main(){
    int array2D[3][3] = { {0, 0, 0},
                          {0, 0, 0},
                          {0, 0, 0} };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<array2D[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n";
    cout<<"New diagonal values of Array"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i==j){
                array2D[i][j] = 1;
                
                //cout<<"New diagonal values of Array["<<i<<"]["<<j<<"] = "<<array2D[i][j]<<endl;
            }
            cout<<array2D[i][j]<<"\t";
        }
           cout<<endl;
    }
    

return 0;
}