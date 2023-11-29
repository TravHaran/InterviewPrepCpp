#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;

int main(){
   Stack* myStack = new Stack(4);

   myStack->push(1);

   myStack->getTop();
   myStack->getHeight();
   myStack->printStack(); 
   cout<<endl;

   cout<<myStack->pop()<<endl;
   cout<<myStack->pop()<<endl;
   cout<<myStack->pop()<<endl;

   Queue* myQueue = new Queue(7);

   myQueue->getFirst();
   myQueue->getLast();
   myQueue->getLength();

   myQueue->printQueue();

   myQueue->enqueue(2);
   myQueue->printQueue();

   cout<<"Dequeued value: "<<myQueue->dequeue()<<endl;
   cout<<"Dequeued value: "<<myQueue->dequeue()<<endl;
   cout<<"Dequeued value: "<<myQueue->dequeue()<<endl;


}