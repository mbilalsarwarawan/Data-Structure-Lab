#include<iostream>
using namespace std;

const int size = 3;
int stackB[size];
int top = -1;

bool isEmpty(){
    if(top == -1){
        cout<<"Stack is empty"<<endl;
        return true;
    }
    else
    return false;
}
bool isFull(){
    if(top == size - 1){
        cout<<"Stack is full"<<endl;
        return true;
    }
    else
    return false;
}
void push(int a){
    if(isFull()){
        cout<<"Sorry! the stack is already full."<<endl;
    }
    else{
        top++;
        stackB[top] = a;
        cout<<a<<" has been pushed to the stack"<<endl; 
    }
}
void pop(){
    if(isEmpty()){
        cout<<"Error! there is no data on the stack"<<endl;
    }
    else{
        int temp = stackB[top];
        top--;
        cout<<temp<<" has been removed from the stack"<<endl;
    }
}
int main(){

isEmpty();
push(90);
push(80);
push(70);
isFull();
pop();
pop();
pop();
isEmpty();
return 0;
}