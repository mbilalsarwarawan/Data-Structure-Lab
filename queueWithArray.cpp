/*implemented queue using array*/

#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;

void enqueue() { // it inserts an element into the queue
   int val;
   if (rear == n - 1) // //if rear is equal to n-1, then the queue is full
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)  //if front is -1,
      front = 0;         //it is incremented by 1.
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++; //Then rear is incremented by 1 
      queue[rear] = val; //and the element is inserted at the index of rear
   }
}
void dequeue() {
   if (front == - 1 || front > rear) { //if there are no elements in the queue
      cout<<"Queue Underflow "; //then queue is underflow
      return ;
   } else {
       //Otherwise the element at front is displayed and front is incremented by one
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void display() {
   if (front == - 1) //if front is -1 then queue is empty
   cout<<"Queue is empty"<<endl;
   else { //if queue is not empty then
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++) //display all elements of queue
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}

/* now test it by calling the functions that you made*/
int main() {
   enqueue();
   enqueue();
   display();
   dequeue();

   return 0;
}