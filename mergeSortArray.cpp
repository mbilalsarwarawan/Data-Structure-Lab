#include<iostream>
using namespace std;


void merge(int A[], int start, int mid, int end){
    int i, j, k, B[10];
    i = start;
    j = mid+1;
    k = start;

    while(i <= mid && j <= end){
        if(A[i]<=A[j]){//comparing the values and copying into second array
            B[k] = A[i];
            k++; i++;
        }
        else{
            B[k] = A[j];
            k++, j++;
        }
    }
    while(i<=mid){ //if there are still some elements left in the array
        B[k] = A[i];
        i++; k++;
    }
    while(j<=end){
        B[k] = A[j];
        k++; j++;
    }
    for (int i = start; i <= end; i++)
    {
        A[i] = B[i]; //copying elements back to array A from array B
    }
}

void sort(int A[], int start, int end){
    if(start < end){
        int mid = (start+end)/2;
        sort(A, start, mid);//dividing the array from start to mid
        sort(A, mid+1, end);//and then from mid+1 to end
        merge(A, start, mid, end);//merging the array back after sorting
    }
}

//print sorted array
void print(int A[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
}

int main(){
    int n = 7;
    int A[n] = {12, 3, 8, 10, 23, 2, 99};
    
    sort(A, 0, 6);//initially start is 0 and end is 6
    
    print(A, n);

return 0;
}