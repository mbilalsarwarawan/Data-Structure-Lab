#include<iostream>
using namespace std;

void merge(int A[], int B[], int C[], int n, int m){
    int i, j, k;
    i = j = k = 0;
//{3, 5, 9, 15, 21}
//{4, 7, 12}
//{3, 4, 5, 7, 9, 12, 15, 21 } 
    while(i<n && j<m){
        if(A[i]<B[j]){
           C[k] = A[i];
           i++; k++;
        }
        else{
            C[k] = B[j];
            k++; j++;
        }
    }
    while(i<n){
        C[k] = A[i];
        k++; i++;
    }
    while(j<m){
        C[k] = B[j];
        j++; k++;
    }
}
void print(int c[]){
    for(int i=0; i<8; i++){
        cout<<c[i]<<" ";
    }
}
int main(){
int n = 5, m = 3;
int A[n] = {3, 5, 9, 15, 21};
int B[m] = {4, 7, 12};
int C[8];

merge(A, B, C, n, m);
print(C);

return 0;
}