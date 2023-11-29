#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

int main(){
    DoublyLinkedList* myDLL = new DoublyLinkedList(1);
    myDLL->append(2);
    myDLL->append(3);
    myDLL->append(4);
    myDLL->append(5);

    cout<<"before deleteNode()"<<endl;
    myDLL->printList();

    myDLL->deleteNode(2);
    cout<<"after deleteNode() in the middle"<<endl;
    myDLL->printList();

    myDLL->deleteNode(0);
    cout<<"after deleteNode() at the front"<<endl;
    myDLL->printList();

    myDLL->deleteNode(2);
    cout<<"after deleteNode() at the end"<<endl;
    myDLL->printList();
    
}