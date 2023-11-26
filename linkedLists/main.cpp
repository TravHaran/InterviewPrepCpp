#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(){
    LinkedList* ll = new LinkedList(5);
    // ll->getHead();
    // ll->getTail();
    // ll->getLength();
    // ll->printList();
    ll->append(3);

    ll->getHead();
    ll->getTail();
    ll->getLength();
    ll->printList();

    ll->append(6);

    ll->getHead();
    ll->getTail();
    ll->getLength();
    ll->printList();

    cout<<"Value at index 2: "<<ll->get(2)->value<<endl;
    ll->insert(2, 12);
    cout<<"Value at index 2: "<<ll->get(2)->value<<endl;
    ll->printList();
    ll->insert(0, 2);
    cout<<"After inserting value: 2 at head.."<<endl;
    ll->printList();
    // ll->insert(5, 2);
    // cout<<"After inserting value: 2 at tail.."<<endl;
    // ll->printList();

    ll->reverse();
    ll->getHead();
    ll->getTail();
    cout<<"After reversing the linked list"<<endl;
    ll->printList();
    // ll->deleteLast();
    // ll->deleteLast();
    // ll->deleteLast();
    // ll->deleteLast();
    // ll->deleteLast();
    // cout<<"After reducing linked list size to 1"<<endl;
    // ll->reverse();
    // ll->printList();
    // ll->getHead();
    // ll->getTail();
    // ll->getLength();
    // cout<<"After reducing linked list size to 0"<<endl;
    // ll->deleteLast();
    // // ll->reverse();
    // ll->printList();



    // ll->deleteFirst();

    // ll->getHead();
    // ll->getTail();
    // ll->getLength();
    // ll->printList();

    // ll->deleteFirst();

    // ll->getHead();
    // ll->getTail();
    // ll->getLength();
    // ll->printList();

    // ll->deleteFirst();

    // ll->getHead();
    // ll->getTail();
    // ll->getLength();
    // ll->printList();

    cout<<"Middle Node: "<<ll->findMiddleNode()->value<<endl;
    return 0;
}